using System;
using System.Collections.Generic;

class MarsRover
{
    private int gridSize = 100;
    private int x = 1;
    private int y = 1;
    private List<string> directions = new List<string> { "north", "east", "south", "west" };
    private int currentDirection = 2; // Starting facing south

    public void TurnLeft()
    {
        currentDirection = (currentDirection - 1 + directions.Count) % directions.Count;
    }

    public void TurnRight()
    {
        currentDirection = (currentDirection + 1) % directions.Count;
    }

    public void MoveForward(int meters)
    {
        switch (directions[currentDirection])
        {
            case "north":
                y -= meters;
                break;
            case "east":
                x += meters;
                break;
            case "south":
                y += meters;
                break;
            case "west":
                x -= meters;
                break;
        }

        // Check bounds
        x = Math.Max(1, Math.Min(x, gridSize));
        y = Math.Max(1, Math.Min(y, gridSize));
    }

    public (int position, string direction) ExecuteCommands(List<string> commands)
    {
        foreach (var command in commands)
        {
            if (command.ToLower() == "left")
            {
                TurnLeft();
            }
            else if (command.ToLower() == "right")
            {
                TurnRight();
            }
            else
            {
                int meters = int.Parse(command.Substring(0, command.Length - 1));
                MoveForward(meters);
            }
        }

        // Calculate position number
        int positionNumber = (y - 1) * gridSize + x;
        return (positionNumber, directions[currentDirection]);
    }

    static void Main(string[] args)
    {
        var rover = new MarsRover();
        var commands = new List<string> { "50m", "Left", "23m", "Left", "4m" };
        var (position, direction) = rover.ExecuteCommands(commands);
        Console.WriteLine($"Position: {position}, Direction: {direction}");
    }
}