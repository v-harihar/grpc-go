all: greeter_client

_cgo_export.h: connect_send.go
	go tool cgo -exportheader $@ $^

connect_send.a: connect_send.go
	go build -buildmode=c-archive $^

greeter_client: main.c _cgo_export.h connect_send.a
	$(CC) -o $@ $^ -lpthread

clean:
	rm -fr _cgo_export.h connect_send.a _obj greeter_client

