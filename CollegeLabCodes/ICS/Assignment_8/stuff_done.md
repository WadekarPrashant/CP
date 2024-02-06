9772  gpg --full-generate-key
 9773  tldr gpg
 9774  ls
 9775  gpg --export --armor 1032210888@mitwpu.edu.in
 9776  echo gpg --export --armor 1032210888@mitwpu.edu.in > krish_public_key.txt
 9777  ls
 9778  gpg --export-secret-keys --armor 1032210888@mitwpu.edu.in
 9779  ls
 9780  echo gpg --export-secret-keys --armor 1032210888@mitwpu.edu.in > krish_private_key.txt
 9781  cat krish_private_key.txt
 9782  gpg --export --armor 1032210888@mitwpu.edu.in > krish_public_key.txt
 9783  gpg --export-secret-keys --armor 1032210888@mitwpu.edu.in > krish_private_key.txt
 9784  cat krish_private_key.txt
 9785  tldr gpg
 9786  gpg --encrypt --sign --recipient 1032210846@mitwpu.edu.in ics_to_parth_encrypted.txt
 9787  gpg --encrypt --sign --recipient 1032210888@mitwpu.edu.in ics_to_parth_encrypted.txt
 9788  ls
 9789  cp ~/Downloads/Parth_Public_key.txt .
 9790  cp ~/Downloads/ics_confidential_file.txt.gpg .
 9791  ls
 9792  gpg --import Parth_Public_key.txt
 9793  gpg --decrypt ics_confidential_file.txt.gpg
 9794  man gpg
 9795  gpg --decrypt ics_confidential_file.txt.gpg Parth_Public_key.txt
 9796  man gpg
 9797  gpg --show-keys
 9798  gpg --armor --export --output krish_public_key.txt 1032210888@mitwpu.edu.in
 9799  ls
 9800  cat krish_public_key.txt
 9801  ls
 9802  gpg --decrypt ics_to_parth_encrypted.txt.gpg
 9803  gpg --list-keys
 9804  gpg --decrypt ics_to_parth_encrypted.txt.gpg
 9805  gpg --decrypt ics_confidential_file.txt.gpg
 9806  gpg --encrypt --sign --recipient 1032210846@mitwpu.edu.in ics_to_parth_encrypted.txt
 9807  mv Parth_Public_key.txt Parth_Public_key.gpg
 9808  gpg --import Parth_Public_key.gpg
 9809  gpg --list-keys
 9810  gpg --decrypt ics_confidential_file.txt.gpg
 9811  gpg --encrypt --sign --recipient 1032210846@mitwpu.edu.in ics_to_parth_encrypted.txt
 9812  gpg --decrypt ics_confidential_file.txt.gpg
 9813  clear
 9814  ls
 9815  ranger
 9816  micro ics_to_parth_encrypted.txt
 9817  gpg --encrypt --sign --recipient 1032210846@mitwpu.edu.in ics_to_parth_encrypted.txt
 9818  cat ics_to_parth_encrypted.txt
 9819  ls
 9820  gpg --decrypt ics_to_parth_encrypted.txt.gpg
 9821  gpg --encrypt --sign --recipient 1032210846@mitwpu.edu.in ics_to_parth_encrypted.txt
 9822  gpg --decrypt ics_confidential_file.txt\(1\).gpg
 9823  gpg --decrypt ics_confidential_file.txt\(2\).gpg