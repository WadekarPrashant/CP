from ecdsa import SigningKey
from hashlib import sha256
from ecdsa.util import sigencode_der
from ecdsa.util import sigdecode_der

from ecdsa import BadSignatureError

# create private key
private_key = SigningKey.generate()

# Write private key to file
with open("priv_key.pem", "wb") as f:
    f.write(private_key.to_pem())

# Create public key
public_key = private_key.verifying_key

# Write public key to file
with open("pub_key.pem", "wb") as f:
    f.write(public_key.to_pem())
    
message = b'a'

# Sign message
sig = private_key.sign_deterministic(
    message,
    hashfunc=sha256,
    sigencode=sigencode_der
)

# Write signature to file
with open("a.sig", "wb") as f:
    f.write(sig)
    

# correct one: 
with open("a.sig", "rb") as f:
    sig = f.read()
    
# Verify signature
print("Trying to verify correct signature")
try:
    ret = public_key.verify(sig, message, sha256, sigdecode=sigdecode_der)
    assert ret
    print("Valid signature")
except BadSignatureError:
    print("Incorrect signature")
    
    
# incorrect one:
with open("b.sig", "rb") as f:
    sig = f.read()
    

# Verify signature
print("Trying to verify incorrect signature")
try:
    ret = public_key.verify(sig, message, sha256, sigdecode=sigdecode_der)
    assert ret
    print("Valid signature")
except BadSignatureError:
    print("Incorrect signature")