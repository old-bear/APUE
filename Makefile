chapters := standards

.PHONY: all $(chapters)
all: $(chapters)

$(chapters):
	$(MAKE) --directory=$@

.PHONY: clean
clean:
	for d in $(chapters);              \
	do                                 \
	  $(MAKE) --directory=$$d clean;   \
	done
