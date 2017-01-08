all: docker-build

docker-build:
	docker build -t christimperley/bughunter:latest .

docker-push:
	docker push christimperley/bughunter:latest

.PHONY: docker-build docker-push
