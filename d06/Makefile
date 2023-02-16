MAKE = make -C ex0

define do
${1}${2} ${3}
endef

all:
	$(call do, $(MAKE),0,)
	$(call do, $(MAKE),1,)
	$(call do, $(MAKE),2,)
	$(call do, $(MAKE),3,)

clean:
	$(MAKE)0 clean
	$(MAKE)1 clean
	$(MAKE)2 clean
	$(MAKE)3 clean

fclean:
	$(MAKE)0 fclean
	$(MAKE)1 fclean
	$(MAKE)2 fclean
	$(MAKE)3 fclean

re:
	$(call do, $(MAKE),0, re)
	$(call do, $(MAKE),1, re)
	$(call do, $(MAKE),2, re)
	$(call do, $(MAKE),3, re)

.PHONY: all clean fclean re
	