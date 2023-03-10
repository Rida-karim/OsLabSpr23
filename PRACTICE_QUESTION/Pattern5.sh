v_rows=5

for((i=1; i<=$v_rows; i++))
do

  for((j=1; j<=$v_rows - $i; j++))
  do
    echo -n "  "
  done

  for((j=1; j<=2*$i - 1; j++))
  do
    echo -n "* "
  done

  echo
done
