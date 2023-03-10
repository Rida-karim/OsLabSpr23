echo Enter number of elements: 
read n
echo Enter array elements: 

for ((i=0; i<n; i++))
do
    read arr[$i]
done

# Performing Bubble sort 
for ((i = 0; i<n; i++))
do
    
    for((j = 0; j<n-i-1; j++))
    do
    
        if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
        then
            # swap
            temp=${arr[j]}
            arr[$j]=${arr[$((j+1))]}  
            arr[$((j+1))]=$temp
        fi
    done
done


echo Array after sorting: 
for ((i=0; i<n; i++))
do
     echo ${arr[$i]}
done

