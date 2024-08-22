import numpy as np
import time

from bubblesort.bubblesort import bubbleSort 

array_dez = np.random.random(10)
array_cem = np.random.random(100)
array_mil = np.random.random(1000)
array_DezMil = np.random.random(10000)
array_CemMil = np.random.random(100000)


start = time.time()
bubbleSort(array_dez)
print(f"Tempo para entrada com 10 elementos: {time.time() - start} segundos\n\n")

start = time.time()
bubbleSort(array_cem)
print(f"Tempo para entrada com 100 elementos: {time.time() - start} segundos\n\n")

start = time.time()
bubbleSort(array_mil)
print(f"Tempo para entrada com 1000 elementos: {time.time() - start} segundos\n\n")

start = time.time()
bubbleSort(array_DezMil)
print(f"Tempo para entrada com 10000 elementos: {time.time() - start} segundos\n\n")
    
start = time.time()
bubbleSort(array_CemMil)
print(f"Tempo para entrada com 100000 elementos: {time.time() - start} segundos\n\n")
