PROJECTS := unl-letter-template.pdf 
.PHONY: all cleansmall clean $(PROJECTS)

TEX=latexmk
TEXFLAGS=-pdf -pdflatex="pdflatex -interaction=nonstopmode" -use-make

all: $(PROJECTS) cleansmall

unl-letter-template.pdf: unl-letter-template.tex
	$(TEX) $(TEXFLAGS) $<

clean:
	$(TEX) -C

cleansmall:
	$(TEX) -c
