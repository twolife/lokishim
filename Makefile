BINS=lokishim.so

all: $(BINS)

%.so: %.c
	$(CC) $(CFLAGS) -m32 -shared -fPIC -Wall -o $@ $^ -ldl

clean:
	rm -f $(BINS)
