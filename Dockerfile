FROM gcc:latest

RUN apt-get update && apt-get install -y git zsh curl

RUN sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

CMD ["/bin/zsh"]
