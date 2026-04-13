FROM fedosdan2/firstdf:latest
ARG WDIR=/home/myapp
WORKDIR $WDIR
ENV MODE=edit
COPY code.cpp .
RUN g++ -static-libgcc -static-libstdc++ ./code.cpp -o code 

ENTRYPOINT ["./code", "default_arg"]
CMD ["one", "two"]