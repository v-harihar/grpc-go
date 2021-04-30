all: greeter_server

_cgo_export.h: greeter.go
	go tool cgo -exportheader $@ $^

greeter.a: greeter.go
	go build -buildmode=c-archive $^

greeter_server: main.c _cgo_export.h greeter.a
	$(CC) -o $@ $^ -lpthread

clean:
	rm -fr _cgo_export.h greeter.a _obj greeter_server
