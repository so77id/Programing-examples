#FUNCTION
define cecho
    @echo "\033[92m$(1)\033[0m"
endef

REGISTRY_URL=so77id
VERSION=latest
SVC=gcc
DOCKER_CONTAINER_NAME=cit2006
DOCKER_FILE=Dockerfile

##############################################################################
############################# DOCKER VARS ####################################
##############################################################################
# COMMANDS
DOCKER_COMMAND=docker

#HOST CPU VARS
HOST_SOURCE_PATH=$(shell pwd)

#IMAGE VARS
IMAGE_SOURCE_PATH=/home/src

# VOLUMES
DOCKER_VOLUMES = --volume=$(HOST_SOURCE_PATH):$(IMAGE_SOURCE_PATH) \
						     --workdir=$(IMAGE_SOURCE_PATH) \
						     --shm-size 8G

DOCKER_RUN_COMMAND=$(DOCKER_COMMAND) run -it --rm --name=$(DOCKER_CONTAINER_NAME) $(DOCKER_VOLUMES) $(REGISTRY_URL)/$(SVC):$(VERSION)

run r: docker-print
	@$(DOCKER_RUN_COMMAND)

build b:
	$(call cecho, "[build] Building docker image...")
	@$(DOCKER_COMMAND) build -t $(REGISTRY_URL)/$(SVC):$(VERSION) -f $(DOCKER_FILE) .
	$(call cecho, "[build] Delete old versions...")
	@$(DOCKER_COMMAND) images|sed "1 d"|grep "<none> *<none>"|awk '{print $$3}'|sort|uniq|xargs $(DOCKER_COMMAND) rmi -f

upload u:
	$(call cecho, "[upload] Uploading cpu docker image...")
	@$(DOCKER_COMMAND) push $(REGISTRY_URL)/$(SVC):$(VERSION)

clean c:
	$(call cecho, "[clean] Cleaning docker images...")
	@$(DOCKER_COMMAND) rmi -f $(REGISTRY_URL)/$(SVC):$(VERSION)

#PRIVATE
docker-print psd:
	$(call cecho, "[CPU Docker] Running cpu docker image...")
