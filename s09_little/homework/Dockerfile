ARG MODE=edit

FROM fedosdan2/pythonscr:latest AS build-stage
ARG WDIR=/home/myapp
WORKDIR $WDIR
ARG MODE 
ENV MODE=$MODE
COPY code.py .
RUN apk add binutils gcc musl-dev python3-dev
RUN pip install --break-system-packages pyinstaller
RUN pyinstaller --onefile code.py

FROM alpine:latest AS release
ARG MODE 
ENV MODE=$MODE
COPY --from=build-stage /home/myapp/dist/code .
ENTRYPOINT ["./code", "default_arg"]
CMD ["one", "two"]
