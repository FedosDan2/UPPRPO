FROM fedosdan2/seconddf:latest AS build-stage
ARG WDIR=/home/myapp
WORKDIR $WDIR
ENV MODE=edit
COPY code.cpp .
RUN g++ -static-libgcc -static-libstdc++ ./code.cpp -o code 

FROM alpine:latest AS release
COPY --from=build-stage /home/myapp/code .
ENTRYPOINT ["./code", "default_arg"]
CMD ["one", "two"]