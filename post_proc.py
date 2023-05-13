import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Plotting numeric solution
data_num = pd.read_csv("results.csv")
print(data_num.head())
plt.scatter(data_num['t_Ns'],data_num['y_Ns'],c='b',s=1)

# Does it have exact solution? Write its expression in line 12 --> data_exact = exact solution expression
t = np.arange(data_num.iloc[0]['t_Ns'],data_num.iloc[-1]['t_Ns'],0.01)
data_exact = np.divide(np.power(t,2),4) - np.divide(t,3) + 1/2 + np.divide(1,np.power(t,2))
plt.plot(t, data_exact, c='k')

plt.show()