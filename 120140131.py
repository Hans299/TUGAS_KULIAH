# Nama : Hans Bonatua Batubara
# NIM : 120140131
beratMax = 10
dataBerat = [5,4,6,3]
dataProfit = [10,40,30,50]
profitbesar = 0
for i in range(len(dataBerat)) :
    for j in range(i+1, len (dataBerat)) :
        temp_berat = 0
        temp = 0
        temp_berat = dataBerat[i] + dataBerat[j]
        temp  = dataProfit[i] + dataProfit[j]
        if temp_berat <= 10 :
            if profitbesar <= temp :
                profitbesar = temp
                berat1 = dataBerat[i]
                berat2 = dataBerat[j]
print ("Profil Maksimal = ",profitbesar)
print ("Kombinasi Berat",berat1, " + ", berat2)