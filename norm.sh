RED="\033[31m"
GREEN="\033[32m"
NC="\033[0m"
CACHE=cache

norminette &> ${CACHE}
ret_val=$?

if [ ${ret_val} -ne 0 ]
then
	echo "${RED}NORM KO!${NC}"
	cat ${CACHE} | grep -v "OK\!"
else
	echo "${GREEN}NORM OK!${NC}"
fi
rm -f ${CACHE}
exit ${ret_val}
