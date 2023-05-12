import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

data_num = pd.read_csv("results.csv")
print(data_num.head())

t = np.arange(data_num.iloc[0]['t_Ns'],data_num.iloc[-1]['t_Ns'],0.01)
data_exact = np.exp((-1)*t)

plt.scatter(data_num['t_Ns'],data_num['y_Ns'],c='b',s=1)
plt.plot(t, data_exact, c='k')
plt.show()
