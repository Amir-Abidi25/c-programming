import pandas as pd
import matplotlib.pyplot as plt
import argparse

# Argument Parser erstellen
parser = argparse.ArgumentParser(description='Plot CSV data')
parser.add_argument('filename', help='CSV file to plot')
parser.add_argument('--size', type=int, default=5, help='Point size (default: 5)')
parser.add_argument('--color', default='blue', help='Point color (default: blue)')
args = parser.parse_args()

try:
    df = pd.read_csv(args.filename)
except FileNotFoundError:
    print(f"Error: File '{args.filename}' not found!")
    exit(1)

# Plotten
plt.figure(figsize=(10, 6))
plt.scatter(df['x'], df['y'], s=args.size, color=args.color, alpha=0.6)
plt.title(f'Plot von {args.filename}')
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True, alpha=0.3)
plt.axhline(y=0, color='k', linewidth=0.5)
plt.axvline(x=0, color='k', linewidth=0.5)
plt.tight_layout()
plt.show()