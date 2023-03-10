v_num=1
v_rows=5

for((i=$v_rows; i>=1; i--))
do

  for((j=1; j<=$i; j++))
  do
    echo -n "$v_num "
    v_num=$((v_num + 1))
  done

  v_num=1
  echo
done
