FROM alpine:latest
WORKDIR /home/myapp

COPY code.cpp .
RUN apk add g++
RUN g++ ./code.cpp -o code 

ENTRYPOINT ["./code", "default_arg"]
CMD ["one", "two"]