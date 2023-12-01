import pygame
import numpy as np
import queue

# Define some colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GRAY = (128, 128, 128)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

# Set the dimensions of the screen
SCREEN_WIDTH = 500
SCREEN_HEIGHT = 400

# Set the dimensions of the grid
GRID_WIDTH = 3
GRID_HEIGHT = 3

# Set the dimensions of each tile
TILE_WIDTH = SCREEN_WIDTH // GRID_WIDTH
TILE_HEIGHT = SCREEN_HEIGHT // GRID_HEIGHT

# Initialize Pygame
pygame.init()

# Set the size of the screen
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))

# Set the title of the screen
pygame.display.set_caption("8 Puzzle Problem")

# Set the font for the text
font = pygame.font.SysFont(None, 30)

# Define the initial state of the puzzle
initial_state = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 0]])

# Define the goal state of the puzzle
goal_state = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 0]])

# Define the current state of the puzzle
current_state = initial_state.copy()

# Define the position of the blank tile
blank_tile_position = np.argwhere(current_state == 0)[0]

# Define the position of the mouse
mouse_position = None

# Define the flag for whether the game is over
game_over = False

# Define the function for drawing the grid
def draw_grid():
    for i in range(GRID_WIDTH):
        for j in range(GRID_HEIGHT):
            rect = pygame.Rect(i * TILE_WIDTH, j * TILE_HEIGHT, TILE_WIDTH, TILE_HEIGHT)
            pygame.draw.rect(screen, WHITE, rect, 1)

# Define the function for drawing the tiles
def draw_tiles():
    for i in range(GRID_WIDTH):
        for j in range(GRID_HEIGHT):
            if current_state[j][i] != 0:
                rect = pygame.Rect(i * TILE_WIDTH, j * TILE_HEIGHT, TILE_WIDTH, TILE_HEIGHT)
                pygame.draw.rect(screen, GRAY, rect)
                text = font.render(str(current_state[j][i]), True, BLACK)
                text_rect = text.get_rect(center=rect.center)
                screen.blit(text, text_rect)

# Define the function for checking if the puzzle is solved
def check_solution(current_state):
    return np.array_equal(current_state, goal_state)


# Define the function for generating the successors of a state
def generate_successors(state):
    successors = []
    blank_tile_position = np.argwhere(state == 0)[0]
    for action in [(0, -1), (0, 1), (-1, 0), (1, 0)]:
        next_position = blank_tile_position + action
        if next_position[0] >= 0 and next_position[0] < GRID_HEIGHT and next_position[1] >= 0 and next_position[1] < GRID_WIDTH:
            next_state = state.copy()
            next_state[blank_tile_position[0]][blank_tile_position[1]] = next_state[next_position[0]][next_position[1]]
            next_state[next_position[0]][next_position[1]] = 0
            successors.append(next_state)
    return successors

# Define the function for calculating the heuristic value of a state
def calculate_heuristic(state):
    return np.sum(state != goal_state)

# Define the function for solving the puzzle using the A* algorithm
# Modify the function for solving the puzzle using the A* algorithm
# Modify the function for solving the puzzle using the A* algorithm
def solve_puzzle():
    frontier = queue.PriorityQueue()
    frontier.put((0, tuple(current_state.flatten())))  # Store the state as a tuple
    came_from = {}
    cost_so_far = {tuple(current_state.flatten()): 0}

    solved = False  # Flag to indicate if the puzzle is solved

    while not frontier.empty() and not solved:
        current = frontier.get()[1]  # Retrieve the state as a tuple
        current = np.array(current).reshape(GRID_HEIGHT, GRID_WIDTH)  # Convert it back to an array

        for next_state in generate_successors(current):
            new_cost = cost_so_far[tuple(current.flatten())] + 1
            if tuple(next_state.flatten()) not in cost_so_far or new_cost < cost_so_far[tuple(next_state.flatten())]:
                cost_so_far[tuple(next_state.flatten())] = new_cost
                priority = new_cost + calculate_heuristic(next_state)
                frontier.put((priority, tuple(next_state.flatten())))  # Store the next state as a tuple
                came_from[tuple(next_state.flatten())] = current

                if np.array_equal(next_state, goal_state):
                    solved = True
                    break

    # Display the solution step by step
    while not np.array_equal(current, initial_state):
        current = came_from[tuple(current.flatten())]
        screen.fill(BLACK)
        draw_grid()
        draw_tiles()
        pygame.display.flip()
        pygame.time.wait(1000)  # Wait for 1 second before the next step

    if solved:
        screen.fill(BLACK)
        draw_grid()
        draw_tiles()
        text = font.render("Puzzle Solved!", True, GREEN)
        text_rect = text.get_rect(center=(SCREEN_WIDTH//2, SCREEN_HEIGHT//2))
        screen.blit(text, text_rect)
        pygame.display.flip()


# Define the main game loop
while not game_over:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True
        elif event.type == pygame.MOUSEBUTTONDOWN:
            mouse_position = pygame.mouse.get_pos()
            if mouse_position[0] > SCREEN_WIDTH - 100 and mouse_position[1] < 50:
                solve_puzzle()
        elif event.type == pygame.MOUSEBUTTONUP:
            mouse_position = None
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP and blank_tile_position[1] > 0:
                current_state[blank_tile_position[1]][blank_tile_position[0]] = current_state[blank_tile_position[1]-1][blank_tile_position[0]]
                current_state[blank_tile_position[1]-1][blank_tile_position[0]] = 0
                blank_tile_position[1] -= 1
            elif event.key == pygame.K_DOWN and blank_tile_position[1] < GRID_HEIGHT-1:
                current_state[blank_tile_position[1]][blank_tile_position[0]] = current_state[blank_tile_position[1]+1][blank_tile_position[0]]
                current_state[blank_tile_position[1]+1][blank_tile_position[0]] = 0
                blank_tile_position[1] += 1
            elif event.key == pygame.K_LEFT and blank_tile_position[0] > 0:
                current_state[blank_tile_position[1]][blank_tile_position[0]] = current_state[blank_tile_position[1]][blank_tile_position[0]-1]
                current_state[blank_tile_position[1]][blank_tile_position[0]-1] = 0
                blank_tile_position[0] -= 1
            elif event.key == pygame.K_RIGHT and blank_tile_position[0] < GRID_WIDTH-1:
                current_state[blank_tile_position[1]][blank_tile_position[0]] = current_state[blank_tile_position[1]][blank_tile_position[0]+1]
                current_state[blank_tile_position[1]][blank_tile_position[0]+1] = 0
                blank_tile_position[0] += 1

    # Clear the screen
    screen.fill(BLACK)

    # Draw the grid
    draw_grid()

    # Draw the tiles
    draw_tiles()

    # Draw the solve button
    solve_button_rect = pygame.Rect(SCREEN_WIDTH - 100, 0, 100, 50)
    pygame.draw.rect(screen, GREEN, solve_button_rect)
    solve_button_text = font.render("Solve", True, BLACK)
    solve_button_text_rect = solve_button_text.get_rect(center=solve_button_rect.center)
    screen.blit(solve_button_text, solve_button_text_rect)

    # Check if the puzzle is solved
    if check_solution(current_state):
        text = font.render("Puzzle Solved!", True, GREEN)
        text_rect = text.get_rect(center=(SCREEN_WIDTH//2, SCREEN_HEIGHT//2))
        screen.blit(text, text_rect)

    # Update the screen
    pygame.display.flip()

# Quit Pygame
pygame.quit()
