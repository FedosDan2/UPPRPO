import sys
import os

print("Arguments:")
for idx, arg in enumerate(sys.argv):
    print(f"Argument {idx}: {sys.argv[idx]}")

print("\nEnvironment values:")
for key, value in os.environ.items():
    print(f"{key} = {value}")