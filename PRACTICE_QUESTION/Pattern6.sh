v_num=1
v_rows=4

for((i=1; i<=$v_rows; i++))
do

  for((j=1; j<=$i; j++))
  do
    echo -n "$v_num "
    v_num=$((v_num + 1))
  done

  echo
done
