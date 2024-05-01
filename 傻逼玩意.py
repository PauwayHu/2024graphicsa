import numpy as np
from matplotlib import pyplot as plt
import pandas as pd
from math import pi
from matplotlib.pyplot import figure

plt.rcParams["patch.force_edgecolor"]=True
df=pd.DataFrame(dict(categories=['1','2','3','4','5'],\
                     group_A=[79,80,92,67,96],group_B=[81,82,60,88,48]))
N=df.shape[0]
angles=[n/float(N)*2*pi for n in range(N)]
angles+=angles[:1]

fig=figure(figsize=(4,4),dpi=90)
ax=fig.add_axes([0.1,0.1,0.6,0.6],polar=True)
ax.set_theta_offset(pi/2)
ax.set_theta_direction(-1)
ax.set_rlabel_position(0)
plt.xticks(angles[:-1], df['categories'],color='black',size=12)
plt.ylim(0, 100)
plt.yticks(np.arange(10,50,10 ),color='black',size=12,\
           verticalalignment='center',horizontalalignment='right')
plt.grid(which='major',axis="x",linestyle='-',linewidth='0.5',\
         color='gray',alpha=0.5)
plt.grid(which='major',axis="y",linestyle='-',linewidth='0.5',\
         color='gray',alpha=0.5)
    
values=df['group_A'].values.flatten().tolist()
values+=values[:1]
ax.fill(angles,values,'#7FBC41',markersize=8,\
        color='k',linewidth=0.25,label="Group_A")
    
values=df['group_B'].values.flatten().tolist()
values+=values[:1]
ax.fill(angles,values,'#C51B7D',alpha=0.30)
ax.plot(angles,values,marker='o',markerfacecolor='#C51B7D',markersize=8,\
        color='k',linewidth=0.25,label='Group_B')
plt.legend(loc='center', bbox_to_anchor=(1.25,0,0,1))