import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ metro.cpp -o metro.x")
os.system("./metro.x > metro.dat")

data = np.loadtxt("metro.dat")

plt.figure()
plt.hist(data)
plt.savefig("metro.png")