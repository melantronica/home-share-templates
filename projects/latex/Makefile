#
# TODO: #
# 

CC := pdflatex # This is the main compiler
# CC := clang --analyze # and comment out the linker last line for sanity
SRCDIR := src
BUILDDIR := build
TARGET := bin/hello.pdf

SRCEXT := tex 
SOURCES := main


$(TARGET): LATEXFILES
	cp $(BUILDDIR)/$(SOURCES).pdf $(TARGET)

LATEXFILES:
	@echo " building pdf"
	mkdir -p build
	TEXINPUTS=src:${TEXINPUTS} $(CC) -output-directory $(BUILDDIR) $(SOURCES).tex

clean:
	@echo " Cleaning..."
	$(RM) -r $(BUILDDIR) $(TARGET)

.PHONY: clean

TEXINPUTS=./src: pdflatex -output-directory build main.tex
