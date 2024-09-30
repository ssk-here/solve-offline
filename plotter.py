import numpy as np
import matplotlib.pyplot as plt

# Define parameters
n_terms = 10  # Number of terms in the summation
alpha = 0.1  # Thermal diffusivity
times = np.arange(10, 21, 2)  # Time values

# Initialize x-axis values
x = np.linspace(0, 1, 100)

def generate_u(t):
  """
  Calculates the temperature u(x, t) at a given time.
  """
  u = np.zeros(len(x))
  for n in range(1, n_terms + 1):
      sin_term = np.sin(n * np.pi / 2)
      exp_term = np.exp(-n**2 * np.pi**2 * alpha * t)
      u += sin_term * np.sin(n * np.pi * x) * exp_term
  return u

# Plot temperature for all time steps
plt.figure(figsize=(10, 6))
for i, t in enumerate(times):
  u = generate_u(t)
  plt.plot(x, u, label=f"t = {t}")

# Customize the plot
plt.xlabel("x")
plt.ylabel("u(x, t)")
plt.title("Solution of 1D Heat Equation for Different Times")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()