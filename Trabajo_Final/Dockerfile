FROM archlinux:base-devel

WORKDIR /compilers

COPY .bashrc ~/

# Actualizar sistema e instalar herramientas necesarias
RUN pacman -Syu --noconfirm
RUN pacman -S --noconfirm git clang cmake python jdk-openjdk antlr4 antlr4-runtime

# Descargar y compilar ANTLR4 runtime para C++
RUN git clone https://github.com/antlr/antlr4.git
WORKDIR /compilers/antlr4/runtime/Cpp
RUN mkdir build && cd build && \
    cmake .. -DANTLR4_INSTALL=ON -DCMAKE_INSTALL_PREFIX=/usr/local && \
    make -j8 && make install

# Descargar ANTLR JAR
WORKDIR /compilers
RUN curl -O https://www.antlr.org/download/antlr-4.13.1-complete.jar

# Configurar bashrc para usar antlr4 fácilmente
RUN echo 'export CLASSPATH=".:/compilers/antlr-4.13.1-complete.jar:$CLASSPATH"' >> ~/.bashrc
RUN echo 'alias antlr4="java org.antlr.v4.Tool"' >> ~/.bashrc
RUN echo 'alias grun="java org.antlr.v4.gui.TestRig"' >> ~/.bashrc
