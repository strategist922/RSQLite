# Setup

## Platform

|setting  |value                        |
|:--------|:----------------------------|
|version  |R version 3.4.0 (2017-04-21) |
|system   |x86_64, linux-gnu            |
|ui       |X11                          |
|language |(EN)                         |
|collate  |en_US.UTF-8                  |
|tz       |Zulu                         |
|date     |2017-04-28                   |

## Packages

|package   |*  |version   |date       |source                             |
|:---------|:--|:---------|:----------|:----------------------------------|
|BH        |   |1.62.0-1  |2016-11-19 |cran (@1.62.0-)                    |
|DBI       |   |0.6-11    |2017-04-24 |Github (rstats-db/DBI@20f1f02)     |
|DBItest   |   |1.4-20    |2017-04-27 |Github (rstats-db/DBItest@669be28) |
|knitr     |   |1.15.1    |2016-11-22 |cran (@1.15.1)                     |
|memoise   |   |1.1.0     |2017-04-21 |CRAN (R 3.4.0)                     |
|plogr     |   |0.1-1     |2016-09-24 |cran (@0.1-1)                      |
|Rcpp      |   |0.12.10.2 |2017-04-27 |Github (RcppCore/Rcpp@feb4d7a)     |
|rmarkdown |   |1.5       |2017-04-26 |cran (@1.5)                        |
|RSQLite   |   |1.1-2     |2017-01-08 |CRAN (R 3.4.0)                     |
|testthat  |   |1.0.2     |2016-04-23 |cran (@1.0.2)                      |

# Check results

39 packages with problems

|package           |version  | errors| warnings| notes|
|:-----------------|:--------|------:|--------:|-----:|
|AnnotationDbi     |1.38.0   |      0|        1|     5|
|AnnotationHubData |1.6.0    |      0|        1|     4|
|clstutils         |1.24.0   |      0|        2|     5|
|CNEr              |1.12.0   |      0|        3|     2|
|DECIPHER          |2.4.0    |      0|        1|     4|
|dplyr             |0.5.0    |      1|        0|     2|
|filematrix        |1.1.0    |      0|        1|     0|
|freqweights       |1.0.3    |      1|        0|     0|
|gcbd              |0.2.6    |      0|        1|     1|
|GeneAnswers       |2.18.0   |      1|        3|     6|
|GenomicFeatures   |1.28.0   |      0|        1|     3|
|GWASTools         |1.22.0   |      1|        0|     1|
|lumi              |2.28.0   |      1|        2|     3|
|maGUI             |2.2      |      1|        0|     0|
|metaseqR          |1.16.0   |      2|        1|     4|
|mgsa              |1.24.0   |      0|        1|     5|
|MmPalateMiRNA     |1.26.0   |      0|        1|     4|
|oce               |0.9-21   |      1|        0|     1|
|oligoClasses      |1.38.0   |      0|        2|     4|
|oligo             |1.40.0   |      1|        2|    10|
|Organism.dplyr    |1.0.0    |      0|        1|     1|
|PAnnBuilder       |1.40.0   |      0|        3|     1|
|PGA               |1.6.0    |      1|        0|     3|
|plethy            |1.14.0   |      2|        0|     3|
|RecordLinkage     |0.4-10   |      1|        0|     1|
|recoup            |1.4.0    |      2|        0|     1|
|RImmPort          |1.4.0    |      0|        1|     0|
|RQDA              |0.2-8    |      1|        0|     1|
|seqplots          |1.13.0   |      1|        0|     3|
|specL             |1.10.0   |      0|        1|     5|
|sqldf             |0.4-10   |      0|        1|     2|
|srvyr             |0.2.1    |      0|        1|     0|
|stream            |1.2-4    |      1|        1|     1|
|survey            |3.31-5   |      2|        1|     0|
|TFBSTools         |1.14.0   |      0|        1|     3|
|trackeR           |0.0.5    |      0|        1|     0|
|TSdata            |2016.8-1 |      0|        1|     0|
|VariantFiltering  |1.12.0   |      0|        1|     4|
|vmsbase           |2.1.3    |      1|        0|     0|

## AnnotationDbi (1.38.0)
Maintainer: Bioconductor Package Maintainer <maintainer@bioconductor.org>

0 errors | 1 warning  | 5 notes

```
checking for unstated dependencies in ‘tests’ ... WARNING
'library' or 'require' call not declared from: ‘org.testing.db’

checking installed package size ... NOTE
  installed size is  8.7Mb
  sub-directories of 1Mb or more:
    R         1.0Mb
    extdata   6.0Mb

checking DESCRIPTION meta-information ... NOTE
Packages listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘methods’ ‘utils’ ‘stats4’ ‘BiocGenerics’ ‘Biobase’ ‘IRanges’ ‘DBI’ ‘RSQLite’
A package should be listed in only one of these fields.

checking dependencies in R code ... NOTE
'library' or 'require' calls in package code:
  ‘GO.db’ ‘KEGG.db’ ‘RSQLite’ ‘graph’
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.

checking R code for possible problems ... NOTE
.selectInp8: no visible global function definition for ‘.resort’
annotMessage: no visible binding for global variable ‘pkgName’
createORGANISMSeeds: no visible global function definition for
  ‘makeAnnDbMapSeeds’
makeGOGraph: no visible binding for global variable ‘GOBPPARENTS’
makeGOGraph: no visible binding for global variable ‘GOMFPARENTS’
makeGOGraph: no visible binding for global variable ‘GOCCPARENTS’
makeGOGraph: no visible global function definition for ‘ftM2graphNEL’
Undefined global functions or variables:
  .resort GOBPPARENTS GOCCPARENTS GOMFPARENTS ftM2graphNEL
  makeAnnDbMapSeeds pkgName

checking Rd line widths ... NOTE
Rd file 'inpIDMapper.Rd':
  \examples lines wider than 100 characters:
       YeastUPSingles = inpIDMapper(ids, "HOMSA", "SACCE", destIDType="UNIPROT", keepMultDestIDMatches = FALSE)

These lines will be truncated in the PDF manual.
```

## AnnotationHubData (1.6.0)
Maintainer: Bioconductor Package Maintainer <maintainer@bioconductor.org>

0 errors | 1 warning  | 4 notes

```
checking for code/documentation mismatches ... WARNING
Functions or methods with usage in documentation object 'AnnotationHubMetadata-class' but not in code:
  jsonPath constructAnnotationHubMetadataFromSourceFilePath
  constructMetadataFromJsonPath


checking DESCRIPTION meta-information ... NOTE
Package listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘BiocInstaller’
A package should be listed in only one of these fields.

checking top-level files ... NOTE
Non-standard file/directory found at top level:
  ‘appveyor.yml’

checking dependencies in R code ... NOTE
'library' or 'require' call to ‘BiocInstaller’ in package code.
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.
Missing object imported by a ':::' call: ‘AnnotationHub:::.db_connection’
Unexported object imported by a ':::' call: ‘OrganismDbi:::.packageTaxIds’
  See the note in ?`:::` about the use of this operator.

checking R code for possible problems ... NOTE
.NCBIMetadataFromUrl: no visible binding for global variable ‘results’
.NCBIMetadataFromUrl: no visible binding for global variable ‘specData’
.makeComplexGR: no visible binding for global variable ‘seqname’
makeAnnotationHubMetadata : <anonymous> : <anonymous>: no visible
  binding for global variable ‘Title’
makeAnnotationHubMetadata : <anonymous> : <anonymous>: no visible
  binding for global variable ‘Description’
makeAnnotationHubMetadata : <anonymous> : <anonymous>: no visible
  binding for global variable ‘BiocVersion’
... 39 lines ...
test_Inparanoid8ImportPreparer_recipe: no visible binding for global
  variable ‘BiocVersion’
test_Inparanoid8ImportPreparer_recipe: no visible global function
  definition for ‘checkTrue’
trackWithAuxiliaryTablesToGRanges: no visible binding for global
  variable ‘seqname’
Undefined global functions or variables:
  BiocVersion Coordinate_1_based DataProvider Description DispatchClass
  Genome Location_Prefix Maintainer RDataClass RDataDateAdded RDataPath
  SourceType SourceUrl SourceVersion Species TaxonomyId Title ahroot
  checkTrue results seqname specData suppresWarnings
```

## clstutils (1.24.0)
Maintainer: Noah Hoffman <ngh2@uw.edu>

0 errors | 2 warnings | 5 notes

```
checking for GNU extensions in Makefiles ... WARNING
Found the following file(s) containing GNU extensions:
  tests/unit/Makefile
Portable Makefiles do not use GNU extensions such as +=, :=, $(shell),
$(wildcard), ifeq ... endif. See section ‘Writing portable packages’ in
the ‘Writing R Extensions’ manual.

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Loading required package: clst
Loading required package: rjson
Loading required package: ape
Error in texi2dvi(file = file, pdf = TRUE, clean = clean, quiet = quiet,  : 
  Running 'texi2dvi' on 'pplacerDemo.tex' failed.
LaTeX errors:
! Package auto-pst-pdf Error: 
    "shell escape" (or "write18") is not enabled:
    auto-pst-pdf will not work!
.
Calls: buildVignettes -> texi2pdf -> texi2dvi
Execution halted


checking DESCRIPTION meta-information ... NOTE
Malformed Title field: should not end in a period.

checking top-level files ... NOTE
Non-standard file/directory found at top level:
  ‘devmakefile’

checking dependencies in R code ... NOTE
'library' or 'require' call to ‘rjson’ which was already attached by Depends.
  Please remove these calls from your code.
'library' or 'require' call to ‘RSVGTipsDevice’ in package code.
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.
Packages in Depends field not imported from:
  ‘ape’ ‘rjson’
  These packages need to be imported from (in the NAMESPACE file)
  for when this namespace is loaded but not attached.

checking foreign function calls ... NOTE
Foreign function call to a different package:
  .Call("seq_root2tip", ..., PACKAGE = "ape")
See chapter ‘System and foreign language interfaces’ in the ‘Writing R
Extensions’ manual.

checking R code for possible problems ... NOTE
edgeMap: no visible global function definition for ‘fromJSON’
findOutliers: no visible global function definition for ‘quantile’
findOutliers: no visible binding for global variable ‘median’
maxDists: no visible binding for global variable ‘median’
placeData: no visible global function definition for ‘read.table’
prettyTree: no visible binding for global variable ‘par’
prettyTree: no visible global function definition for ‘plot’
prettyTree: no visible binding for global variable ‘.PlotPhyloEnv’
prettyTree: no visible binding for global variable ‘points’
... 19 lines ...
taxonomyFromRefpkg: no visible global function definition for
  ‘read.csv’
Undefined global functions or variables:
  .PlotPhyloEnv dev.off devSVGTips fromJSON legend median par plot
  points quantile read.csv read.table setSVGShapeToolTip text
Consider adding
  importFrom("grDevices", "dev.off")
  importFrom("graphics", "legend", "par", "plot", "points", "text")
  importFrom("stats", "median", "quantile")
  importFrom("utils", "read.csv", "read.table")
to your NAMESPACE file.
```

## CNEr (1.12.0)
Maintainer: Ge Tan <ge_tan@live.com>  
Bug reports: https://github.com/ge11232002/CNEr/issues

0 errors | 3 warnings | 2 notes

```
checking for missing documentation entries ... WARNING
Undocumented code objects:
  ‘addAncestorGO’
All user-level objects in a package should have documentation entries.
See chapter ‘Writing R documentation files’ in the ‘Writing R
Extensions’ manual.

checking compiled code ... WARNING
File ‘CNEr/libs/CNEr.so’:
  Found ‘abort’, possibly from ‘abort’ (C)
    Object: ‘ucsc/errabort.o’
  Found ‘exit’, possibly from ‘exit’ (C)
    Objects: ‘ucsc/errabort.o’, ‘ucsc/pipeline.o’
  Found ‘puts’, possibly from ‘printf’ (C), ‘puts’ (C)
    Object: ‘ucsc/pipeline.o’
  Found ‘rand’, possibly from ‘rand’ (C)
    Object: ‘ucsc/obscure.o’
  Found ‘stderr’, possibly from ‘stderr’ (C)
    Objects: ‘ucsc/axt.o’, ‘ucsc/errabort.o’, ‘ucsc/obscure.o’,
      ‘ucsc/verbose.o’, ‘ucsc/os.o’
  Found ‘stdout’, possibly from ‘stdout’ (C)
    Objects: ‘ucsc/common.o’, ‘ucsc/errabort.o’, ‘ucsc/verbose.o’,
      ‘ucsc/os.o’
File ‘CNEr/libs/CNEr.so’:
  Found no call to: ‘R_useDynamicSymbols’

Compiled code should not call entry points which might terminate R nor
write to stdout/stderr instead of to the console, nor the system RNG.
It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in engine$weave(file, quiet = quiet, encoding = enc) :
  Pandoc (>= 1.12.3) and/or pandoc-citeproc not available. Falling back to R Markdown v1.
Quitting from lines 2-15 (CNEr.Rmd) 
Error: processing vignette 'CNEr.Rmd' failed with diagnostics:
could not find function "doc_date"
Execution halted


checking installed package size ... NOTE
  installed size is 29.4Mb
  sub-directories of 1Mb or more:
    R        11.5Mb
    extdata  15.9Mb
    libs      1.1Mb

checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  ‘BiocGenerics:::replaceSlots’ ‘S4Vectors:::make_zero_col_DataFrame’
  See the note in ?`:::` about the use of this operator.
```

## DECIPHER (2.4.0)
Maintainer: Erik Wright <eswright@pitt.edu>

0 errors | 1 warning  | 4 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...

Loading required package: S4Vectors
Loading required package: stats4

Attaching package: ‘S4Vectors’

The following object is masked from ‘package:base’:
... 8 lines ...

The following object is masked from ‘package:base’:

    strsplit

Loading required package: RSQLite

Error: processing vignette 'DesignMicroarray.Rnw' failed with diagnostics:
 chunk 13 (label = expr11) 
Error in linbin2D(x, gpoints1, gpoints2) : object 'F_lbtwod' not found
Execution halted

checking installed package size ... NOTE
  installed size is  9.2Mb
  sub-directories of 1Mb or more:
    data      2.5Mb
    doc       3.8Mb
    extdata   1.4Mb

checking foreign function calls ... NOTE
Registration problems:
  symbol ‘functionCall’ in the local frame:
   .Call(functionCall, myXStringSet, as.numeric(subMatrix), gapOpening, 
       gapExtension, gapLetter, shiftPenalty, threshold, weight, 
       PACKAGE = "DECIPHER")
  symbol ‘consensusProfile’ in the local frame:
   .Call(consensusProfile, pattern, p.weight, NULL, PACKAGE = "DECIPHER")
  symbol ‘consensusProfile’ in the local frame:
   .Call(consensusProfile, subject, s.weight, NULL, PACKAGE = "DECIPHER")
... 11 lines ...
       structureMatrix)
  Evaluating ‘compression[1]’ during check gives error
‘object 'compression' not found’:
   .Call(compression[1], x, 2L - length(compression), compressRepeats, 
       processors, PACKAGE = "DECIPHER")
  Evaluating ‘compression[1]’ during check gives error
‘object 'compression' not found’:
   .Call(compression[1], x, 2L - length(compression), processors, 
       PACKAGE = "DECIPHER")
See chapter ‘System and foreign language interfaces’ in the ‘Writing R
Extensions’ manual.

checking R code for possible problems ... NOTE
DesignSignatures: no visible binding for global variable ‘deltaHrules’
Undefined global functions or variables:
  deltaHrules

checking compiled code ... NOTE
File ‘DECIPHER/libs/DECIPHER.so’:
  Found no call to: ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## dplyr (0.5.0)
Maintainer: Hadley Wickham <hadley@rstudio.com>  
Bug reports: https://github.com/hadley/dplyr/issues

1 error  | 0 warnings | 2 notes

```
checking tests ... ERROR
  Running ‘testthat.R’
Running the tests in ‘tests/testthat.R’ failed.
Last 13 lines of output:
  Actual value: "Expecting a single value: [extent=0]."
  
  
  2. Failure: summarise gives proper errors (#153) (@test-summarise.r#62) --------
  error$message does not match "expecting a single value".
  Actual value: "Expecting a single value: [extent=2]."
  
  
  testthat results ================================================================
  OK: 1507 SKIPPED: 1 FAILED: 2
  1. Failure: summarise gives proper errors (#153) (@test-summarise.r#61) 
  2. Failure: summarise gives proper errors (#153) (@test-summarise.r#62) 
  
  Error: testthat unit tests failed
  Execution halted

checking installed package size ... NOTE
  installed size is 24.0Mb
  sub-directories of 1Mb or more:
    libs  21.9Mb

checking compiled code ... NOTE
File ‘dplyr/libs/dplyr.so’:
  Found no calls to: ‘R_registerRoutines’, ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## filematrix (1.1.0)
Maintainer: Andrey A Shabalin <ashabalin@vcu.edu>  
Bug reports: https://github.com/andreyshabalin/filematrix/issues

0 errors | 1 warning  | 0 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in engine$weave(file, quiet = quiet, encoding = enc) :
  Pandoc (>= 1.12.3) and/or pandoc-citeproc not available. Falling back to R Markdown v1.
Quitting from lines 2-23 (Best_Prectices.Rmd) 
Error: processing vignette 'Best_Prectices.Rmd' failed with diagnostics:
could not find function "doc_date"
Execution halted

```

## freqweights (1.0.3)
Maintainer: Emilio Torres-Manzanera <torres@uniovi.es>

1 error  | 0 warnings | 0 notes

```
checking examples ... ERROR
Running examples in ‘freqweights-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: clarachunk
> ### Title: Clustering Large Chunks
> ### Aliases: clarachunk claramerge clarasub
> 
> ### ** Examples
... 12 lines ...
+   b <- claramerge(subclusters,k)
+      print(b$medoids)
+ 
+    print(nrow(b$tablefreq))
+   print(b$tablefreq)
+ }
Loading required package: cluster
Error in cluster::clara(x, k, samples = samples, rngR = TRUE, keep.data = FALSE) : 
  object 'cl_clara' not found
Calls: clarasub -> <Anonymous>
Execution halted
```

## gcbd (0.2.6)
Maintainer: Dirk Eddelbuettel <edd@debian.org>

0 errors | 1 warning  | 1 note 

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in packageDescription("gputools") :
  no package 'gputools' was found
Error: processing vignette 'gcbd.Rnw' failed with diagnostics:
at gcbd.Rnw:860, subscript out of bounds
Execution halted


checking package dependencies ... NOTE
Package suggested but not available for checking: ‘gputools’
```

## GeneAnswers (2.18.0)
Maintainer: Lei Huang <lhuang7@uchicago.edu> and Gang Feng <gilbertfeng@gmail.com>

1 error  | 3 warnings | 6 notes

```
checking examples ... ERROR
Running examples in ‘GeneAnswers-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: chartPlots
> ### Title: Pie Chart and Bar Plots
> ### Aliases: chartPlots
> ### Keywords: methods
> 
> ### ** Examples
> 
> x <- matrix(c(6,9,3,30,13,2,15,20), nrow = 4, ncol=2, byrow=FALSE,
+                dimnames = list(c("group1", "group2", "group3", "group4"),
+                                c("value1", "value2")))
> chartPlots(x, chartType='all', specifiedCol = "value2", top = 3)
Error in x11() : screen devices should not be used in examples etc
Calls: chartPlots -> x11
Execution halted

checking whether package ‘GeneAnswers’ can be installed ... WARNING
Found the following significant warnings:
  Warning: replacing previous import ‘stats::decompose’ by ‘igraph::decompose’ when loading ‘GeneAnswers’
  Warning: replacing previous import ‘stats::spectrum’ by ‘igraph::spectrum’ when loading ‘GeneAnswers’
See ‘/home/muelleki/git/R/RSQLite/revdep/checks/GeneAnswers.Rcheck/00install.out’ for details.

checking sizes of PDF files under ‘inst/doc’ ... WARNING
  ‘gs+qpdf’ made some significant size reductions:
     compacted ‘geneAnswers.pdf’ from 1374Kb to 600Kb
  consider running tools::compactPDF(gs_quality = "ebook") on these files

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning: replacing previous import ‘stats::spectrum’ by ‘igraph::spectrum’ when loading ‘GeneAnswers’
Loading required package: org.Hs.eg.db

Loading required package: GO.db

Loading required package: KEGG.db

... 8 lines ...
Loading required package: org.Mm.eg.db

Error in texi2dvi(file = file, pdf = TRUE, clean = clean, quiet = quiet,  : 
  Running 'texi2dvi' on 'geneAnswers.tex' failed.
LaTeX errors:
! Package auto-pst-pdf Error: 
    "shell escape" (or "write18") is not enabled:
    auto-pst-pdf will not work!
.
Calls: buildVignettes -> texi2pdf -> texi2dvi
Execution halted

checking package dependencies ... NOTE
Depends: includes the non-default packages:
  ‘igraph’ ‘RCurl’ ‘annotate’ ‘Biobase’ ‘XML’ ‘RSQLite’ ‘MASS’
  ‘Heatplus’ ‘RColorBrewer’
Adding so many packages to the search path is excessive and importing
selectively is preferable.

checking installed package size ... NOTE
  installed size is 36.2Mb
  sub-directories of 1Mb or more:
    External  32.4Mb
    data       1.1Mb
    doc        1.6Mb

checking DESCRIPTION meta-information ... NOTE
Package listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘annotate’
A package should be listed in only one of these fields.

checking dependencies in R code ... NOTE
'library' or 'require' calls to packages already attached by Depends:
  ‘Biobase’ ‘Heatplus’ ‘MASS’ ‘RColorBrewer’ ‘XML’ ‘igraph’
  Please remove these calls from your code.
'library' or 'require' calls in package code:
  ‘GO.db’ ‘KEGG.db’ ‘biomaRt’ ‘reactome.db’
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.

checking R code for possible problems ... NOTE
Found an obsolete/platform-specific call in the following functions:
  ‘chartPlots’ ‘drawTable’
Found the platform-specific device:
  ‘x11’
dev.new() is the preferred way to open a new device, in the unlikely
event one is needed.
File ‘GeneAnswers/R/zzz.R’:
  .onLoad calls:
    require(Biobase)
... 78 lines ...
  data("DmIALite", package = "GeneAnswers")
File ‘GeneAnswers/R/getDOLiteTerms.R’:
  data("DOLiteTerm", package = "GeneAnswers")
File ‘GeneAnswers/R/zzz.R’:
  data("DOLite", package = "GeneAnswers")
  data("DOLiteTerm", package = "GeneAnswers")
  data("HsIALite", package = "GeneAnswers")
  data("MmIALite", package = "GeneAnswers")
  data("RnIALite", package = "GeneAnswers")
  data("DmIALite", package = "GeneAnswers")
See section ‘Good practice’ in ‘?data’.

checking Rd line widths ... NOTE
Rd file 'GeneAnswers-class.Rd':
  \examples lines wider than 100 characters:
     x <- geneAnswersBuilder(humanGeneInput, 'org.Hs.eg.db', categoryType='GO.BP', testType='hyperG', pvalueT=0.01, FDR.correct=TRUE, geneEx ... [TRUNCATED]

Rd file 'GeneAnswers-package.Rd':
  \examples lines wider than 100 characters:
     x <- geneAnswersBuilder(humanGeneInput, 'org.Hs.eg.db', categoryType='GO.BP', testType='hyperG', pvalueT=0.01, FDR.correct=TRUE, geneEx ... [TRUNCATED]

Rd file 'buildNet.Rd':
... 144 lines ...
     ## Not run: topDOLITEGenes(x, geneSymbol=TRUE, orderby='pvalue', top=10, topGenes='ALL', genesOrderBy='pValue', file=TRUE)

Rd file 'topPATHGenes.Rd':
  \examples lines wider than 100 characters:
     ## Not run: topPATHGenes(x, geneSymbol=TRUE, orderby='genenum', top=6, topGenes=8, genesOrderBy='foldChange')

Rd file 'topREACTOME.PATHGenes.Rd':
  \examples lines wider than 100 characters:
     ## Not run: topREACTOME.PATHGenes(x, geneSymbol=TRUE, orderby='pvalue', top=10, topGenes='ALL', genesOrderBy='pValue', file=TRUE)

These lines will be truncated in the PDF manual.
```

## GenomicFeatures (1.28.0)
Maintainer: Bioconductor Package Maintainer <maintainer@bioconductor.org>

0 errors | 1 warning  | 3 notes

```
checking for missing documentation entries ... WARNING
Undocumented code objects:
  ‘exonicParts’ ‘intronicParts’
All user-level objects in a package should have documentation entries.
See chapter ‘Writing R documentation files’ in the ‘Writing R
Extensions’ manual.

checking package dependencies ... NOTE
Depends: includes the non-default packages:
  ‘BiocGenerics’ ‘S4Vectors’ ‘IRanges’ ‘GenomeInfoDb’ ‘GenomicRanges’
  ‘AnnotationDbi’
Adding so many packages to the search path is excessive and importing
selectively is preferable.

checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  ‘biomaRt:::martBM’ ‘biomaRt:::martDataset’ ‘biomaRt:::martHost’
  ‘rtracklayer:::resourceDescription’ ‘rtracklayer:::ucscTableOutputs’
  See the note in ?`:::` about the use of this operator.

checking R code for possible problems ... NOTE
.writeMetadataFeatureTable: no visible global function definition for
  ‘packageDescription’
.writeMetadataTable: no visible global function definition for
  ‘packageDescription’
Undefined global functions or variables:
  packageDescription
Consider adding
  importFrom("utils", "packageDescription")
to your NAMESPACE file.
```

## GWASTools (1.22.0)
Maintainer: Stephanie M. Gogarten <sdmorris@u.washington.edu>, Adrienne Stilp <amstilp@u.washington.edu>

1 error  | 0 warnings | 1 note 

```
checking tests ... ERROR
  Running ‘test.R’ [164s/165s]
Running the tests in ‘tests/test.R’ failed.
Last 13 lines of output:
  
  Test files with failing tests
  
     assocCoxPH_test.R 
       test_CPH 
       test_GxE 
       test_runCPH 
       test_runCPH_GxE 
       test_strata 
  
  
  Error in BiocGenerics:::testPackage("GWASTools", pattern = ".*_test\\.R$") : 
    unit tests failed for package GWASTools
  In addition: There were 50 or more warnings (use warnings() to see the first 50)
  Execution halted

checking Rd line widths ... NOTE
Rd file 'assocRegression.Rd':
  \examples lines wider than 100 characters:
     scanAnnot$blood.pressure[scanAnnot$case.cntl.status==1] <- rnorm(sum(scanAnnot$case.cntl.status==1), mean=100, sd=10)
     scanAnnot$blood.pressure[scanAnnot$case.cntl.status==0] <- rnorm(sum(scanAnnot$case.cntl.status==0), mean=90, sd=5)

Rd file 'createDataFile.Rd':
  \usage lines wider than 90 characters:
                    precision="single", compress="LZMA_RA:1M", compress.geno="", compress.annot="LZMA_RA",
                             precision="single", compress="LZMA_RA:1M", compress.annot="LZMA_RA",

These lines will be truncated in the PDF manual.
```

## lumi (2.28.0)
Maintainer: Pan Du <dupan.mail@gmail.com>, Lei Huang <lhuang@bsd.uchicago.edu>, Gang Feng <g-feng@northwestern.edu>

1 error  | 2 warnings | 3 notes

```
checking examples ... ERROR
Running examples in ‘lumi-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: MAplot-methods
> ### Title: MAplot of a ExpressionSet object
> ### Aliases: MAplot-methods MAplot MAplot.ExpressionSet
> ###   MAplot,ExpressionSet-method
> ### Keywords: methods hplot
> 
> ### ** Examples
> 
> ## load example data
> data(example.lumi)
> 
> MAplot(example.lumi)
> 
> MAplot(example.lumi, smoothScatter=TRUE)
Error in linbin2D(x, gpoints1, gpoints2) : object 'F_lbtwod' not found
Calls: MAplot ... smoothScatter -> <Anonymous> -> <Anonymous> -> linbin2D
Execution halted

checking dependencies in R code ... WARNING
'::' or ':::' imports not declared from:
  ‘IRanges’ ‘bigmemoryExtras’

checking files in ‘vignettes’ ... WARNING
Files in the 'vignettes' directory but no files in 'inst/doc':
  ‘IlluminaAnnotation.R’, ‘IlluminaAnnotation.pdf’, ‘lumi.R’,
    ‘lumi.pdf’, ‘lumi_VST_evaluation.R’, ‘lumi_VST_evaluation.pdf’,
    ‘methylationAnalysis.R’, ‘methylationAnalysis.pdf’
Package has no Sweave vignette sources and no VignetteBuilder field.

checking installed package size ... NOTE
  installed size is  6.5Mb
  sub-directories of 1Mb or more:
    R      2.6Mb
    data   3.6Mb

checking Rd line widths ... NOTE
Rd file 'IlluminaID2nuID.Rd':
  \usage lines wider than 90 characters:
     IlluminaID2nuID(IlluminaID, lib.mapping=NULL, species = c("Human", "Mouse", "Rat", "Unknown"), chipVersion = NULL, ...)

Rd file 'addAnnotationInfo.Rd':
  \usage lines wider than 90 characters:
     addAnnotationInfo(methyLumiM, lib = 'FDb.InfiniumMethylation.hg19', annotationColumn=c('COLOR_CHANNEL', 'CHROMOSOME', 'POSITION'))

Rd file 'addNuID2lumi.Rd':
... 177 lines ...
     smoothQuantileNormalization(dataMatrix, ref = NULL, adjData=NULL, logMode = TRUE, bandwidth = NULL, degree = 1, verbose = FALSE, ...)

Rd file 'ssn.Rd':
  \usage lines wider than 90 characters:
     ssn(x.lumi, targetArray = NULL, scaling = TRUE, bgMethod=c('density', 'mean', 'median', 'none'), fgMethod=c('mean', 'density', 'median' ... [TRUNCATED]

Rd file 'vst.Rd':
  \usage lines wider than 90 characters:
     vst(u, std, nSupport = min(length(u), 500), backgroundStd=NULL, fitMethod = c('linear', 'quadratic'), lowCutoff = 1/3, ifPlot = FALSE)

These lines will be truncated in the PDF manual.

checking Rd cross-references ... NOTE
Package unavailable to check Rd xrefs: ‘bigmemoryExtras’
```

## maGUI (2.2)
Maintainer: Dhammapal Bharne <dhammapalb@uohyd.ac.in>

1 error  | 0 warnings | 0 notes

```
checking whether package ‘maGUI’ can be installed ... ERROR
Installation failed.
See ‘/home/muelleki/git/R/RSQLite/revdep/checks/maGUI.Rcheck/00install.out’ for details.
```

## metaseqR (1.16.0)
Maintainer: Panagiotis Moulos <moulos@fleming.gr>

2 errors | 1 warning  | 4 notes

```
checking examples ... ERROR
Running examples in ‘metaseqR-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: diagplot.edaseq
> ### Title: Diagnostic plots based on the EDASeq package
> ### Aliases: diagplot.edaseq
> 
> ### ** Examples
> 
> require(DESeq)
> data.matrix <- counts(makeExampleCountDataSet())
> sample.list <- list(A=c("A1","A2"),B=c("B1","B2","B3"))
> diagplot.edaseq(data.matrix,sample.list,which.plot="meandiff")
dev.new(): using pdf(file="Rplots6.pdf")
Error in linbin2D(x, gpoints1, gpoints2) : object 'F_lbtwod' not found
Calls: diagplot.edaseq ... smoothScatter -> <Anonymous> -> <Anonymous> -> linbin2D
Execution halted
** found \donttest examples: check also with --run-donttest

checking tests ... ERROR
  Running ‘runTests.R’ [20s/23s]
Running the tests in ‘tests/runTests.R’ failed.
Last 13 lines of output:
  ERROR in test_estimate_aufc_weights: Error in .check_ncores(cores) : 13 simultaneous processes spawned
  ERROR in test_metaseqr: Error in .check_ncores(cores) : 10 simultaneous processes spawned
  
  Test files with failing tests
  
     test_estimate_aufc_weights.R 
       test_estimate_aufc_weights 
  
     test_metaseqr.R 
       test_metaseqr 
  
  
  Error in BiocGenerics:::testPackage("metaseqR") : 
    unit tests failed for package metaseqR
  Execution halted

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...

The following objects are masked from 'package:ShortRead':

    left, right

Loading required package: lattice
    Welcome to 'DESeq'. For improved performance, usability and
... 8 lines ...
    plotMA

The following object is masked from 'package:BiocGenerics':

    plotMA

Loading required package: qvalue
Quitting from lines 119-159 (metaseqr-pdf.Rnw) 
Error: processing vignette 'metaseqr-pdf.Rnw' failed with diagnostics:
13 simultaneous processes spawned
Execution halted

checking package dependencies ... NOTE
Package which this enhances but not available for checking: ‘TCC’

checking DESCRIPTION meta-information ... NOTE
Malformed Title field: should not end in a period.

checking dependencies in R code ... NOTE
'library' or 'require' calls in package code:
  ‘BSgenome’ ‘BiocInstaller’ ‘GenomicRanges’ ‘RMySQL’ ‘RSQLite’
  ‘Rsamtools’ ‘TCC’ ‘VennDiagram’ ‘parallel’ ‘rtracklayer’ ‘survcomp’
  ‘zoo’
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.

checking R code for possible problems ... NOTE
biasPlotToJSON: no visible binding for global variable ‘nams’
cddat: no visible global function definition for ‘assayData’
cddat: no visible global function definition for ‘ks.test’
cddat: no visible global function definition for ‘p.adjust’
cdplot: no visible global function definition for ‘plot’
cdplot: no visible global function definition for ‘lines’
countsBioToJSON: no visible binding for global variable ‘nams’
diagplot.avg.ftd : <anonymous>: no visible binding for global variable
  ‘sd’
... 246 lines ...
             "dev.off", "jpeg", "pdf", "png", "postscript", "tiff")
  importFrom("graphics", "abline", "arrows", "axis", "grid", "lines",
             "mtext", "par", "plot", "plot.new", "plot.window", "points",
             "text", "title")
  importFrom("methods", "as", "new")
  importFrom("stats", "as.dist", "cmdscale", "cor", "end", "ks.test",
             "mad", "median", "model.matrix", "na.exclude", "optimize",
             "p.adjust", "p.adjust.methods", "pchisq", "quantile",
             "rexp", "rnbinom", "runif", "sd", "start", "var")
to your NAMESPACE file (and ensure that your DESCRIPTION Imports field
contains 'methods').
```

## mgsa (1.24.0)
Maintainer: Sebastian Bauer <mail@sebastianbauer.info>

0 errors | 1 warning  | 5 notes

```
checking for GNU extensions in Makefiles ... WARNING
Found the following file(s) containing GNU extensions:
  src/Makevars
  src/Makevars.in
Portable Makefiles do not use GNU extensions such as +=, :=, $(shell),
$(wildcard), ifeq ... endif. See section ‘Writing portable packages’ in
the ‘Writing R Extensions’ manual.

checking top-level files ... NOTE
Non-standard files/directories found at top level:
  ‘acinclude.m4’ ‘aclocal.m4’ ‘script’

checking whether the namespace can be loaded with stated dependencies ... NOTE
Warning: no function found corresponding to methods exports from ‘mgsa’ for: ‘show’

A namespace must be able to be loaded with just the base namespace
loaded: otherwise if the namespace gets loaded by a saved object, the
session will be unable to start.

Probably some imports need to be declared in the NAMESPACE file.

checking dependencies in R code ... NOTE
'library' or 'require' call to ‘gplots’ which was already attached by Depends.
  Please remove these calls from your code.
'library' or 'require' calls in package code:
  ‘DBI’ ‘GO.db’ ‘RSQLite’
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.
Packages in Depends field not imported from:
  ‘gplots’ ‘methods’
  These packages need to be imported from (in the NAMESPACE file)
  for when this namespace is loaded but not attached.

checking R code for possible problems ... NOTE
createMgsaGoSets: no visible global function definition for ‘new’
mcmcSummary: no visible binding for global variable ‘sd’
mgsa.wrapper: no visible global function definition for ‘str’
mgsa.wrapper: no visible global function definition for ‘new’
readGAF: no visible global function definition for ‘read.delim’
readGAF: no visible global function definition for ‘na.omit’
readGAF: no visible global function definition for ‘new’
initialize,MgsaSets: no visible global function definition for
  ‘callNextMethod’
... 10 lines ...
  ‘close.screen’
Undefined global functions or variables:
  barplot2 callNextMethod close.screen na.omit new par read.delim
  relist screen sd split.screen str
Consider adding
  importFrom("graphics", "close.screen", "par", "screen", "split.screen")
  importFrom("methods", "callNextMethod", "new")
  importFrom("stats", "na.omit", "sd")
  importFrom("utils", "read.delim", "relist", "str")
to your NAMESPACE file (and ensure that your DESCRIPTION Imports field
contains 'methods').

checking compiled code ... NOTE
File ‘mgsa/libs/mgsa.so’:
  Found no call to: ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## MmPalateMiRNA (1.26.0)
Maintainer: Guy Brock <guy.brock@louisville.edu>

0 errors | 1 warning  | 4 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
    'citation("pkgname")'.

Loading required package: xtable
Loading required package: limma

Attaching package: ‘limma’

... 8 lines ...
Loading required package: latticeExtra
Loading required package: RColorBrewer
Loading required package: multtest
Loading required package: clValid
Loading required package: cluster

Error: processing vignette 'MmPalateMiRNA.Rnw' failed with diagnostics:
 chunk 39 (label = Clustering) 
Error in silhouette.default(cluster, dmatrix = as.matrix(Dist)) : 
  object 'sildist' not found
Execution halted

checking package dependencies ... NOTE
Depends: includes the non-default packages:
  ‘Biobase’ ‘xtable’ ‘limma’ ‘statmod’ ‘lattice’ ‘vsn’
Adding so many packages to the search path is excessive and importing
selectively is preferable.

checking DESCRIPTION meta-information ... NOTE
Packages listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘limma’ ‘lattice’ ‘Biobase’
A package should be listed in only one of these fields.

checking dependencies in R code ... NOTE
Packages in Depends field not imported from:
  ‘methods’ ‘statmod’ ‘vsn’ ‘xtable’
  These packages need to be imported from (in the NAMESPACE file)
  for when this namespace is loaded but not attached.

checking R code for possible problems ... NOTE
clustPlot: no visible global function definition for ‘par’
clustPlot: no visible global function definition for ‘plot’
clustPlot: no visible global function definition for ‘axis’
clustPlot: no visible global function definition for ‘lines’
clustPlot: no visible global function definition for ‘legend’
fixOutliers : <anonymous>: no visible global function definition for
  ‘sd’
imputeKNN: no visible global function definition for ‘sd’
imputeKNN: no visible global function definition for ‘cor’
... 36 lines ...
  definition for ‘assayData’
levelplot,list-missing: no visible global function definition for
  ‘median’
Undefined global functions or variables:
  RG.MA as.formula assayData axis cor featureData legend lines mad
  median pData par plot sd stack
Consider adding
  importFrom("graphics", "axis", "legend", "lines", "par", "plot")
  importFrom("stats", "as.formula", "cor", "mad", "median", "sd")
  importFrom("utils", "stack")
to your NAMESPACE file.
```

## oce (0.9-21)
Maintainer: Dan Kelley <Dan.Kelley@Dal.Ca>  
Bug reports: https://github.com/dankelley/oce/issues

1 error  | 0 warnings | 1 note 

```
checking examples ... ERROR
Running examples in ‘oce-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: read.oce
> ### Title: Read an Oceanographic Data File
> ### Aliases: read.oce
> 
> ### ** Examples
> 
> 
> library(oce)
> x <- read.oce(system.file("extdata", "ctd.cnv", package="oce"))
> plot(x) # summary with TS and profiles
Error in if (!is.null(x@metadata$startTime) && 4 < nchar(x@metadata$startTime,  : 
  missing value where TRUE/FALSE needed
Calls: plot -> plot -> .local
Execution halted

checking installed package size ... NOTE
  installed size is  5.5Mb
  sub-directories of 1Mb or more:
    help   2.1Mb
```

## oligoClasses (1.38.0)
Maintainer: Benilton Carvalho <beniltoncarvalho@gmail.com> and Robert Scharpf <rscharpf@jhsph.edu>

0 errors | 2 warnings | 4 notes

```
checking for missing documentation entries ... WARNING
Undocumented S4 methods:
  generic '[' and siglist 'CNSet,ANY,ANY,ANY'
  generic '[' and siglist 'gSetList,ANY,ANY,ANY'
All user-level objects in a package (including S4 classes and methods)
should have documentation entries.
See chapter ‘Writing R documentation files’ in the ‘Writing R
Extensions’ manual.

checking files in ‘vignettes’ ... WARNING
Files in the 'vignettes' directory but no files in 'inst/doc':
  ‘scriptsForExampleData/CreateExampleData.R’
Package has no Sweave vignette sources and no VignetteBuilder field.

checking package dependencies ... NOTE
Packages which this enhances but not available for checking:
  ‘doMC’ ‘doMPI’ ‘doSNOW’ ‘doRedis’

checking dependencies in R code ... NOTE
Unexported object imported by a ':::' call: ‘Biobase:::assayDataEnvLock’
  See the note in ?`:::` about the use of this operator.

checking R code for possible problems ... NOTE
getSequenceLengths: no visible binding for global variable ‘seqlengths’
pdPkgFromBioC: no visible binding for global variable ‘contrib.url’
pdPkgFromBioC: no visible global function definition for
  ‘available.packages’
pdPkgFromBioC: no visible global function definition for
  ‘install.packages’
chromosome,gSetList: no visible global function definition for
  ‘chromosomeList’
coerce,CNSet-CopyNumberSet: no visible global function definition for
  ‘totalCopynumber’
geometry,FeatureSet: no visible global function definition for ‘getPD’
Undefined global functions or variables:
  available.packages chromosomeList contrib.url getPD install.packages
  seqlengths totalCopynumber
Consider adding
  importFrom("utils", "available.packages", "contrib.url",
             "install.packages")
to your NAMESPACE file.

checking Rd line widths ... NOTE
Rd file 'AssayDataList.Rd':
  \examples lines wider than 100 characters:
     r <- lapply(r, function(x,dns) {dimnames(x) <- dns; return(x)}, dns=list(letters[1:5], LETTERS[1:5]))

Rd file 'GenomeAnnotatedDataFrameFrom-methods.Rd':
  \examples lines wider than 100 characters:
                                 dimnames=list(c("rs10000092","rs1000055", "rs100016", "rs10003241", "rs10004197"), NULL))

Rd file 'largeObjects.Rd':
  \usage lines wider than 90 characters:
     initializeBigMatrix(name=basename(tempfile()), nr=0L, nc=0L, vmode = "integer", initdata = NA)

Rd file 'oligoSetExample.Rd':
  \examples lines wider than 100 characters:
                                     copyNumber=integerMatrix(log2(locusLevelData[["copynumber"]]/100), 100),

These lines will be truncated in the PDF manual.
```

## oligo (1.40.0)
Maintainer: Benilton Carvalho <benilton@unicamp.br>

1 error  | 2 warnings | 10 notes

```
checking examples ... ERROR
Running examples in ‘oligo-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: MAplot
> ### Title: MA plots
> ### Aliases: MAplot MAplot-methods MAplot,FeatureSet-method
> ###   MAplot,TilingFeatureSet-method MAplot,PLMset-method
> ###   MAplot,ExpressionSet-method MAplot,matrix-method
... 8 lines ...
+   groups <- factor(rep(c('brain', 'UnivRef'), each=3))
+   data.frame(sampleNames(nimbleExpressionFS), groups)
+   MAplot(nimbleExpressionFS, pairs=TRUE, ylim=c(-.5, .5), groups=groups)
+ }
Loading required package: oligoData
Loading required package: pd.hg18.60mer.expr
Loading required package: RSQLite
Loading required package: DBI
Error in loadNamespace(name) : there is no package called ‘KernSmooth’
Calls: MAplot ... tryCatch -> tryCatchList -> tryCatchOne -> <Anonymous>
Execution halted

checking for code/documentation mismatches ... WARNING
Codoc mismatches from documentation object 'boxplot':
\S4method{boxplot}{FeatureSet}
  Code: function(x, which = c("pm", "mm", "bg", "both", "all"), transfo
                 = log2, nsample = 10000, target = "mps1", ...)
  Docs: function(x, which = c("pm", "mm", "bg", "both", "all"), transfo
                 = log2, nsample = 10000, ...)
  Argument names in code not in docs:
    target
  Mismatches in argument names:
... 11 lines ...
  Mismatches in argument names:
    Position: 5 Code: target Docs: ...

S4 class codoc mismatches from documentation object 'oligoPLM-class':
Slots for class 'oligoPLM'
  Code: annotation chip.coefs description geometry manufacturer method
        narrays nprobes nprobesets phenoData probe.coefs protocolData
        residualSE residuals se.chip.coefs se.probe.coefs weights
  Docs: annotation chip.coefs geometry manufacturer method narrays
        nprobes nprobesets probe.coefs residualSE residuals
        se.chip.coefs se.probe.coefs weights

checking files in ‘vignettes’ ... WARNING
Files in the 'vignettes' directory newer than all files in 'inst/doc':
  ‘Makefile’

checking package dependencies ... NOTE
Packages which this enhances but not available for checking: ‘doMC’ ‘doMPI’

checking installed package size ... NOTE
  installed size is 30.2Mb
  sub-directories of 1Mb or more:
    R         1.1Mb
    doc      12.9Mb
    scripts  15.7Mb

checking DESCRIPTION meta-information ... NOTE
Packages listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘biomaRt’ ‘AnnotationDbi’ ‘GenomeGraphs’ ‘RCurl’ ‘ff’
A package should be listed in only one of these fields.

checking top-level files ... NOTE
Non-standard file/directory found at top level:
  ‘TODO.org’

checking whether the namespace can be loaded with stated dependencies ... NOTE
Warning: no function found corresponding to methods exports from ‘oligo’ for: ‘show’

A namespace must be able to be loaded with just the base namespace
loaded: otherwise if the namespace gets loaded by a saved object, the
session will be unable to start.

Probably some imports need to be declared in the NAMESPACE file.

checking dependencies in R code ... NOTE
Unexported object imported by a ':::' call: ‘Biobase:::annotatedDataFrameFromMatrix’
  See the note in ?`:::` about the use of this operator.

checking foreign function calls ... NOTE
Foreign function calls to a different package:
  .Call("ReadHeader", ..., PACKAGE = "affyio")
  .Call("read_abatch", ..., PACKAGE = "affyio")
See chapter ‘System and foreign language interfaces’ in the ‘Writing R
Extensions’ manual.

checking R code for possible problems ... NOTE
image,FeatureSet: warning in matrix(NA, nr = geom[1], nc = geom[2]):
  partial argument match of 'nr' to 'nrow'
image,FeatureSet: warning in matrix(NA, nr = geom[1], nc = geom[2]):
  partial argument match of 'nc' to 'ncol'
NUSE: no visible global function definition for ‘abline’
RLE: no visible global function definition for ‘abline’
basicMvApairsPlot: no visible binding for global variable
  ‘smoothScatter’
basicMvApairsPlot: no visible global function definition for ‘frame’
... 36 lines ...
Undefined global functions or variables:
  IQR abline aggregate approx complete.cases data frame intensities
  loess man_fsetid mtext predict rnorm smooth.spline smoothScatter
  splinefun text
Consider adding
  importFrom("graphics", "abline", "frame", "mtext", "smoothScatter",
             "text")
  importFrom("stats", "IQR", "aggregate", "approx", "complete.cases",
             "loess", "predict", "rnorm", "smooth.spline", "splinefun")
  importFrom("utils", "data")
to your NAMESPACE file.

checking Rd line widths ... NOTE
Rd file 'basicRMA.Rd':
  \usage lines wider than 90 characters:
     basicRMA(pmMat, pnVec, normalize = TRUE, background = TRUE, bgversion = 2, destructive = FALSE, verbose = TRUE, ...)

Rd file 'fitProbeLevelModel.Rd':
  \usage lines wider than 90 characters:
     fitProbeLevelModel(object, background=TRUE, normalize=TRUE, target="core", method="plm", verbose=TRUE, S4=TRUE, ...)

Rd file 'getProbeInfo.Rd':
  \usage lines wider than 90 characters:
     getProbeInfo(object, field, probeType = "pm", target = "core", sortBy = c("fid", "man_fsetid", "none"), ...)
  \examples lines wider than 100 characters:
        agenGene <- getProbeInfo(affyGeneFS, field=c('fid', 'fsetid', 'type'), target='probeset', subset= type == 'control->bgp->antigenomic ... [TRUNCATED]

Rd file 'preprocessTools.Rd':
  \usage lines wider than 90 characters:
     backgroundCorrect(object, method=backgroundCorrectionMethods(), copy=TRUE, extra, subset=NULL, target='core', verbose=TRUE)
     normalize(object, method=normalizationMethods(), copy=TRUE, subset=NULL,target='core', verbose=TRUE, ...)

These lines will be truncated in the PDF manual.

checking compiled code ... NOTE
File ‘oligo/libs/oligo.so’:
  Found no calls to: ‘R_registerRoutines’, ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## Organism.dplyr (1.0.0)
Maintainer: Martin Morgan <martin.morgan@roswellpark.org>

0 errors | 1 warning  | 1 note 

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in engine$weave(file, quiet = quiet, encoding = enc) :
  Pandoc (>= 1.12.3) and/or pandoc-citeproc not available. Falling back to R Markdown v1.
Quitting from lines 2-34 (Organism.dplyr.Rmd) 
Error: processing vignette 'Organism.dplyr.Rmd' failed with diagnostics:
could not find function "Biocpkg"
Execution halted


checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  ‘AnnotationDbi:::smartKeys’ ‘GenomicFeatures:::.exons_with_3utr’
  ‘GenomicFeatures:::.exons_with_5utr’
  ‘GenomicFeatures:::get_TxDb_seqinfo0’
  ‘S4Vectors:::extract_data_frame_rows’
  See the note in ?`:::` about the use of this operator.
```

## PAnnBuilder (1.40.0)
Maintainer: Li Hong <sysptm@gmail.com>

0 errors | 3 warnings | 1 note 

```
checking dependencies in R code ... WARNING
'library' or 'require' call to ‘Biobase’ which was already attached by Depends.
  Please remove these calls from your code.
':::' calls which should be '::':
  ‘AnnotationDbi:::as.list’ ‘base:::get’ ‘tools:::list_files_with_type’
  See the note in ?`:::` about the use of this operator.
Unexported objects imported by ':::' calls:
  ‘AnnotationDbi:::createAnnDbBimaps’
  ‘AnnotationDbi:::prefixAnnObjNames’ ‘tools:::makeLazyLoadDB’
  See the note in ?`:::` about the use of this operator.
  Including base/recommended package(s):
  ‘tools’
There are ::: calls to the package's namespace in its code. A package
  almost never needs to use ::: for its own objects:
  ‘getShortSciName’ ‘twoStepSplit’

checking R code for possible problems ... WARNING
Found an obsolete/platform-specific call in the following function:
  ‘makeLLDB’
Found the defunct/removed function:
  ‘.saveRDS’

In addition to the above warning(s), found the following notes:

File ‘PAnnBuilder/R/zzz.R’:
  .onLoad calls:
    require(Biobase)

Package startup functions should not change the search path.
See section ‘Good practice’ in '?.onAttach'.

Found the following calls to data() loading into the global environment:
File ‘PAnnBuilder/R/writeManPage.R’:
  data("descriptionInfo")
  data("descriptionInfo")
See section ‘Good practice’ in ‘?data’.

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
             }
     

trying URL 'http://gpcr2.biocomp.unibo.it/bacello/dataset.htm'
Content type 'text/html; charset=iso-8859-1' length 5062 bytes
==================================================
downloaded 5062 bytes
... 8 lines ...
Warning in rsqlite_disconnect(conn@ptr) :
  There are 1 result in use. The connection will be released when they are closed
Error in texi2dvi(file = file, pdf = TRUE, clean = clean, quiet = quiet,  : 
  Running 'texi2dvi' on 'PAnnBuilder.tex' failed.
LaTeX errors:
! Package auto-pst-pdf Error: 
    "shell escape" (or "write18") is not enabled:
    auto-pst-pdf will not work!
.
Calls: buildVignettes -> texi2pdf -> texi2dvi
Execution halted

checking DESCRIPTION meta-information ... NOTE
Packages listed in more than one of Depends, Imports, Suggests, Enhances:
  ‘methods’ ‘utils’ ‘Biobase’ ‘RSQLite’ ‘AnnotationDbi’
A package should be listed in only one of these fields.
```

## PGA (1.6.0)
Maintainer: Bo Wen <wenbo@genomics.cn>, Shaohang Xu <xsh.skye@gmail.com>

1 error  | 0 warnings | 3 notes

```
checking examples ... ERROR
Running examples in ‘PGA-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: easyRun
> ### Title: easyRun
> ### Aliases: easyRun
> 
> ### ** Examples
... 86 lines ...
 8: f(l = layers[[i]], d = data[[i]])
 9: by_layer(function(l, d) l$compute_position(d, layout))
10: ggplot_build(x)
11: print.ggplot(ggobj)
12: print(ggobj)
13: .base_transfer(res$file)
14: reportSNV(parser_dir, tab_dir, report_dir)
15: reportGear(parser_dir = iddir, tab_dir = dbdir, report_dir = report_dir)
16: easyRun(gtfFile = gtffile, vcfFile = vcffile, bedFile = bedfile,     spectra = msfile, annotation_path = annotation, genome = Hsapiens,     cpu = 6, enzyme = "[KR]|[X]", varmod = "15.994915@M", itol = 0.05,     fixmod = "57.021464@C", tol = 10, tolu = "ppm", itolu = "Daltons",     miss = 2, maxCharge = 8, ti = FALSE, xmx = 1)
An irrecoverable exception occurred. R is aborting now ...
Segmentation fault (core dumped)

checking installed package size ... NOTE
  installed size is  5.6Mb
  sub-directories of 1Mb or more:
    extdata   1.8Mb

checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  ‘biomaRt:::martBM’ ‘biomaRt:::martDataset’ ‘biomaRt:::martHost’
  ‘customProDB:::makeTranscriptDbFromBiomart_archive’
  See the note in ?`:::` about the use of this operator.

checking R code for possible problems ... NOTE
.base_transfer: no visible binding for global variable ‘peptide’
.base_transfer: no visible binding for global variable ‘refbase’
.base_transfer: no visible binding for global variable ‘varbase’
.base_transfer: no visible binding for global variable ‘aaref’
.base_transfer: no visible binding for global variable ‘aavar’
.base_transfer: no visible binding for global variable ‘Type’
.base_transfer: no visible binding for global variable ‘Freq’
.get_30aa_splited_seq: no visible global function definition for ‘.’
.get_30aa_splited_seq: no visible binding for global variable ‘id’
... 216 lines ...
reportSNV: no visible binding for global variable ‘abc’
reportSNV: no visible binding for global variable ‘xyz’
Undefined global functions or variables:
  . .I .N .SD CUFF_ID Change Class Evalue Frame Freq ID Index Mass
  MutNum Query Qvalue Strand Substring Type aapos aaref aavar abc
  alleleCount alleles charge chr chrom cumlen delta_da delta_ppm evalue
  gene_name genename genome<- id isSAP isUnique junType jun_type label
  miss mods mrnaAcc mz name output pep peptide pincoding position
  pro_name proname prot protAcc protein rbindlist readAAStringSet
  readDNAStringSet refbase rsid seqlengths seqlevels seqlevels<- subseq
  transcript tx_name txid txname varbase writeXStringSet x xyz y
```

## plethy (1.14.0)
Maintainer: Daniel Bottomly <bottomly@ohsu.edu>

2 errors | 0 warnings | 3 notes

```
checking examples ... ERROR
Running examples in ‘plethy-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: Utility functions
> ### Title: Utility functions to assist with QA/QC and analysis of
> ###   plethysmography data
> ### Aliases: add.labels.by.sample get.err.breaks adjust.labels proc.sanity
> ### Keywords: Utilities
... 21 lines ...
> temp.db.file <- tempfile()
> write(sim.bux.lines, file=temp.file)
> test.bux.db <- parse.buxco(file.name=temp.file, db.name=temp.db.file, chunk.size=10000)
Processing /tmp/RtmpvFzmgx/filee0417a8451bf in chunks of 10000
Starting chunk 1
Reached breakpoint change
Processing breakpoint 1
Starting sample sample_1
Error in if (sum(which.gt) > 0) { : missing value where TRUE/FALSE needed
Calls: parse.buxco ... write.sample.breaks -> write.sample.db -> sanity.check.time
Execution halted

checking tests ... ERROR
  Running ‘runTests.R’ [26s/25s]
Running the tests in ‘tests/runTests.R’ failed.
Last 13 lines of output:
  Test files with failing tests
  
     test_check_helpers.R 
       test.add.labels.by.sample 
       test.dbImport 
       test.get.err.breaks 
       test.summaryMeasures 
  
  
  Error in BiocGenerics:::testPackage("plethy") : 
    unit tests failed for package plethy
  In addition: Warning message:
  In .Internal(gc(verbose, reset)) :
    closing unused connection 3 (/tmp/RtmpFvRvty/filee12d4412965f)
  Execution halted

checking dependencies in R code ... NOTE
There are ::: calls to the package's namespace in its code. A package
  almost never needs to use ::: for its own objects:
  ‘csv.to.table’ ‘find.break.ranges.integer’ ‘fix.time’ ‘multi.grep’

checking R code for possible problems ... NOTE
generate.sample.buxco : <anonymous> : <anonymous> : <anonymous> :
  <anonymous>: no visible global function definition for ‘rnorm’
make.db.package: no visible global function definition for
  ‘packageDescription’
mvtsplot.data.frame: no visible global function definition for ‘colors’
mvtsplot.data.frame: no visible global function definition for ‘par’
mvtsplot.data.frame: no visible global function definition for ‘layout’
mvtsplot.data.frame: no visible global function definition for
  ‘strwidth’
... 14 lines ...
tsplot,BuxcoDB: no visible binding for global variable ‘Sample_Name’
Undefined global functions or variables:
  Axis Days Sample_Name Value abline bxp colors layout legend lines
  median mtext packageDescription par plot rnorm strwidth terms
Consider adding
  importFrom("grDevices", "colors")
  importFrom("graphics", "Axis", "abline", "bxp", "layout", "legend",
             "lines", "mtext", "par", "plot", "strwidth")
  importFrom("stats", "median", "rnorm", "terms")
  importFrom("utils", "packageDescription")
to your NAMESPACE file.

checking Rd line widths ... NOTE
Rd file 'parsing.Rd':
  \usage lines wider than 90 characters:
     parse.buxco(file.name = NULL, table.delim = "Table", burn.in.lines = c("Measurement", "Create measurement", "Waiting for", "Site Acknow ... [TRUNCATED]
       chunk.size = 500, db.name = "bux_test.db", max.run.time.minutes = 60, overwrite = TRUE, verbose=TRUE, make.package = F, author = NULL ... [TRUNCATED]
     parse.buxco.basic(file.name=NULL, table.delim="Table", burn.in.lines=c("Measurement", "Create measurement", "Waiting for", "Site Acknow ... [TRUNCATED]

Rd file 'utilities.Rd':
  \usage lines wider than 90 characters:
     get.err.breaks(bux.db, max.exp.count=150, max.acc.count=900, vary.perc=.1, label.val="ERR")
     proc.sanity(bux.db, max.exp.time=300, max.acc.time=1800, max.exp.count=150, max.acc.count=900)
  \examples lines wider than 100 characters:
     err.dta <- data.frame(samples=samples, count=count, measure_break=measure_break, table_break=table_break, phase=phase, stringsAsFactors ... [TRUNCATED]
     sample.labels <- data.frame(samples=c("sample_1","sample_3"), response_type=c("high", "low"),stringsAsFactors=FALSE)

These lines will be truncated in the PDF manual.
```

## RecordLinkage (0.4-10)
Maintainer: Andreas Borg <borga@uni-mainz.de>

1 error  | 0 warnings | 1 note 

```
checking examples ... ERROR
Running examples in ‘RecordLinkage-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: classifyUnsup
> ### Title: Unsupervised Classification
> ### Aliases: classifyUnsup
> ### Keywords: classif
> 
> ### ** Examples
> 
> # Classification with bclust
> data(RLdata500)
> rpairs=compare.dedup(RLdata500, identity=identity.RLdata500,
+                     blockfld=list(1,3,5,6,7))
> result=classifyUnsup(rpairs,method="bclust")
Committee Member: 1(1) 2(1) 3(1) 4(1) 5(1) 6(1) 7(1) 8(1) 9(1) 10(1)Error in knn1(object$allcenters, x, factor(1:nrow(object$allcenters))) : 
  object 'VR_knn1' not found
Calls: classifyUnsup -> bclust -> knn1
Execution halted

checking compiled code ... NOTE
File ‘RecordLinkage/libs/RecordLinkage.so’:
  Found no calls to: ‘R_registerRoutines’, ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## recoup (1.4.0)
Maintainer: Panagiotis Moulos <moulos@fleming.gr>

2 errors | 0 warnings | 1 note 

```
checking examples ... ERROR
Running examples in ‘recoup-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: kmeansDesign
> ### Title: Apply k-means clustering to profile data
> ### Aliases: kmeansDesign
> 
> ### ** Examples
... 16 lines ...
+     rc=0.5
+ )
Getting main ranges for measurements
  measurement type: chipseq
  genomic region type: tss
Calculating requested regions coverage for WT H4K20me1
  processing chr12
Error in .check_ncores(cores) : 8 simultaneous processes spawned
Calls: recoup ... lapply -> FUN -> cmclapply -> mclapply -> .check_ncores
Execution halted
** found \donttest examples: check also with --run-donttest

checking tests ... ERROR
  Running ‘runTests.R’ [18s/17s]
Running the tests in ‘tests/runTests.R’ failed.
Last 13 lines of output:
  
   
  1 Test Suite : 
  recoup RUnit Tests - 1 test function, 1 error, 0 failures
  ERROR in test_recoup: Error in .check_ncores(cores) : 8 simultaneous processes spawned
  
  Test files with failing tests
  
     test_recoup.R 
       test_recoup 
  
  
  Error in BiocGenerics:::testPackage("recoup") : 
    unit tests failed for package recoup
  Execution halted

checking R code for possible problems ... NOTE
baseCoverageMatrix: no visible global function definition for
  ‘runValue’
baseCoverageMatrix : <anonymous>: no visible global function definition
  for ‘runValue’
binCoverageMatrix : <anonymous>: no visible global function definition
  for ‘runValue’
buildAnnotationStore: no visible global function definition for
  ‘Seqinfo’
calcCoverage: no visible global function definition for ‘runValue’
... 66 lines ...
recoupProfile: no visible binding for global variable ‘Design’
reduceExons : <anonymous>: no visible global function definition for
  ‘DataFrame’
splitVector: no visible global function definition for ‘Rle’
Undefined global functions or variables:
  Condition Coverage DataFrame Design IRanges Index Rle ScanBamParam
  Seqinfo Signal alphabetFrequency bamWhich<- biocLite dbConnect
  dbDisconnect dbDriver dbGetQuery dbWriteTable flankedSexon gene
  genomeRanges getBSgenome grid.text indexBam installed.genomes
  mclapply mcmapply runValue seqlevels seqlevels<- sexon sortBam
  subjectHits
```

## RImmPort (1.4.0)
Maintainer: Ravi Shankar <rshankar@stanford.edu>

0 errors | 1 warning  | 0 notes

```
checking sizes of PDF files under ‘inst/doc’ ... WARNING
  ‘gs+qpdf’ made some significant size reductions:
     compacted ‘RImmPort_Article.pdf’ from 734Kb to 339Kb
  consider running tools::compactPDF(gs_quality = "ebook") on these files
```

## RQDA (0.2-8)
Maintainer: HUANG Ronggui <ronggui.huang@gmail.com>

1 error  | 0 warnings | 1 note 

```
checking whether package ‘RQDA’ can be installed ... ERROR
Installation failed.
See ‘/home/muelleki/git/R/RSQLite/revdep/checks/RQDA.Rcheck/00install.out’ for details.

checking package dependencies ... NOTE
Packages which this enhances but not available for checking:
  ‘rjpod’ ‘d3Network’
```

## seqplots (1.13.0)
Maintainer: Przemyslaw Stempor <ps562@cam.ac.uk>  
Bug reports: http://github.com/przemol/seqplots/issues

1 error  | 0 warnings | 3 notes

```
checking tests ... ERROR
  Running ‘test-all.R’ [24s/23s]
Running the tests in ‘tests/test-all.R’ failed.
Last 13 lines of output:
  6: plotHeatmap(plotset$data, main, labels, legend, keepratio, plotScale, sortrows, clusters, 
         clstmethod, include, ssomt1, ssomt2, cex.main, cex.lab, cex.axis, cex.legend, 
         xlab, ylab, autoscale, zmin, zmax, xlim, ln.v, s, indi, o_min, o_max, colvec, 
         clspace, pointsize, embed, ggplot, raster, ...)
  7: plotHeatmap(plotset$data, main, labels, legend, keepratio, plotScale, sortrows, clusters, 
         clstmethod, include, ssomt1, ssomt2, cex.main, cex.lab, cex.axis, cex.legend, 
         xlab, ylab, autoscale, zmin, zmax, xlim, ln.v, s, indi, o_min, o_max, colvec, 
         clspace, pointsize, embed, ggplot, raster, ...)
  
  testthat results ================================================================
  OK: 63 SKIPPED: 0 FAILED: 1
  1. Error: Test getPlotSetArray function and plotting interfaces (@test1.R#53) 
  
  Error: testthat unit tests failed
  Execution halted

checking installed package size ... NOTE
  installed size is  9.0Mb
  sub-directories of 1Mb or more:
    R          1.1Mb
    doc        2.4Mb
    seqplots   4.9Mb

checking foreign function calls ... NOTE
Foreign function call to a different package:
  .Call("BWGFile_summary", ..., PACKAGE = "rtracklayer")
See chapter ‘System and foreign language interfaces’ in the ‘Writing R
Extensions’ manual.

checking R code for possible problems ... NOTE
getPlotSetArray : <anonymous>: no visible global function definition
  for ‘qt’
getSF : <anonymous>: no visible global function definition for ‘approx’
ggHeatmapPlotWrapper: no visible global function definition for
  ‘colorRampPalette’
ggHeatmapPlotWrapper: no visible binding for global variable ‘Var2’
ggHeatmapPlotWrapper: no visible binding for global variable ‘Var1’
ggHeatmapPlotWrapper: no visible binding for global variable ‘value’
heatmapPlotWrapper: no visible global function definition for
... 42 lines ...
  capture.output colorRampPalette cutree dist hclust image kmeans
  layout lines mtext par plot.new qt rainbow rect rgb title value
Consider adding
  importFrom("grDevices", "adjustcolor", "colorRampPalette", "rainbow",
             "rgb")
  importFrom("graphics", "abline", "axis", "box", "image", "layout",
             "lines", "mtext", "par", "plot.new", "rect", "title")
  importFrom("stats", "approx", "as.dendrogram", "cutree", "dist",
             "hclust", "kmeans", "qt")
  importFrom("utils", "capture.output")
to your NAMESPACE file.
```

## specL (1.10.0)
Maintainer: Christian Panse <cp@fgcz.ethz.ch>, Witold E. Wolski <wewolski@gmail.com>  
Bug reports: https://github.com/fgcz/specL/issues

0 errors | 1 warning  | 5 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in engine$weave(file, quiet = quiet, encoding = enc) :
  Pandoc (>= 1.12.3) and/or pandoc-citeproc not available. Falling back to R Markdown v1.
Quitting from lines 2-25 (cdsw.Rmd) 
Error: processing vignette 'cdsw.Rmd' failed with diagnostics:
could not find function "doc_date"
Execution halted


checking installed package size ... NOTE
  installed size is  5.7Mb
  sub-directories of 1Mb or more:
    doc   4.2Mb

checking S3 generic/method consistency ... NOTE
Found the following apparent S3 methods exported but not registered:
  merge.specLSet plot.psm plot.psmSet summary.psmSet
See section ‘Registering S3 methods’ in the ‘Writing R Extensions’
manual.

checking R code for possible problems ... NOTE
.onAttach: no visible global function definition for ‘packageVersion’
.retentiontimePlotFile : <anonymous>: no visible global function
  definition for ‘rgb’
plot,specLSet: no visible global function definition for ‘draw.circle’
summary,specLSet : <anonymous>: no visible binding for global variable
  ‘iRTpeptides’
Undefined global functions or variables:
  draw.circle iRTpeptides packageVersion rgb
Consider adding
  importFrom("grDevices", "rgb")
  importFrom("utils", "packageVersion")
to your NAMESPACE file.

checking Rd files ... NOTE
prepare_Rd: ms1.p2069.Rd:28-32: Dropping empty section \references
prepare_Rd: ms1.p2069.Rd:23-26: Dropping empty section \examples

checking compiled code ... NOTE
File ‘specL/libs/specL.so’:
  Found no calls to: ‘R_registerRoutines’, ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## sqldf (0.4-10)
Maintainer: G. Grothendieck <ggrothendieck@gmail.com>  
Bug reports: http://groups.google.com/group/sqldf

0 errors | 1 warning  | 2 notes

```
checking whether package ‘sqldf’ can be installed ... WARNING
Found the following significant warnings:
  Warning: no DISPLAY variable so Tk is not available
See ‘/home/muelleki/git/R/RSQLite/revdep/checks/sqldf.Rcheck/00install.out’ for details.

checking dependencies in R code ... NOTE
'library' or 'require' call to ‘tcltk’ in package code.
  Please use :: or requireNamespace() instead.
  See section 'Suggested packages' in the 'Writing R Extensions' manual.

checking R code for possible problems ... NOTE
read.csv.sql: no visible global function definition for ‘download.file’
sqldf: no visible global function definition for ‘modifyList’
sqldf: no visible global function definition for ‘head’
Undefined global functions or variables:
  download.file head modifyList
Consider adding
  importFrom("utils", "download.file", "head", "modifyList")
to your NAMESPACE file.
```

## srvyr (0.2.1)
Maintainer: Greg Freedman Ellis <greg.freedman@gmail.com>  
Bug reports: https://github.com/gergness/srvyr/issues

0 errors | 1 warning  | 0 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
18: value_fun(ev$value, ev$visible)
19: withVisible(value_fun(ev$value, ev$visible))
20: withCallingHandlers(withVisible(value_fun(ev$value, ev$visible)),     warning = wHandler, error = eHandler, message = mHandler)
21: handle(pv <- withCallingHandlers(withVisible(value_fun(ev$value,     ev$visible)), warning = wHandler, error = eHandler, message = mHandler))
22: evaluate_call(expr, parsed$src[[i]], envir = envir, enclos = enclos,     debug = debug, last = i == length(out), use_try = stop_on_error !=         2L, keep_warning = keep_warning, keep_message = keep_message,     output_handler = output_handler, include_timing = include_timing)
23: evaluate(code, envir = env, new_device = FALSE, keep_warning = !isFALSE(options$warning),     keep_message = !isFALSE(options$message), stop_on_error = if (options$error &&         options$include) 0L else 2L, output_handler = knit_handlers(options$render,         options))
24: in_dir(input_dir(), evaluate(code, envir = env, new_device = FALSE,     keep_warning = !isFALSE(options$warning), keep_message = !isFALSE(options$message),     stop_on_error = if (options$error && options$include) 0L else 2L,     output_handler = knit_handlers(options$render, options)))
... 8 lines ...
32: knit2html(..., force_v1 = TRUE)
33: (if (grepl("\\.[Rr]md$", file)) knit2html_v1 else if (grepl("\\.[Rr]rst$",     file)) knit2pdf else knit)(file, encoding = encoding, quiet = quiet,     envir = globalenv())
34: vweave(...)
35: engine$weave(file, quiet = quiet, encoding = enc)
36: doTryCatch(return(expr), name, parentenv, handler)
37: tryCatchOne(expr, names, parentenv, handlers[[1L]])
38: tryCatchList(expr, classes, parentenv, handlers)
39: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    find_vignette_product(name, by = "weave", engine = engine)}, error = function(e) {    stop(gettextf("processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)), domain = NA, call. = FALSE)})
40: buildVignettes(dir = "/home/muelleki/git/R/RSQLite/revdep/checks/srvyr.Rcheck/vign_test/srvyr")
An irrecoverable exception occurred. R is aborting now ...
Segmentation fault (core dumped)
```

## stream (1.2-4)
Maintainer: Michael Hahsler <mhahsler@lyle.smu.edu>  
Bug reports: https://github.com/mhahsler/stream/issues

1 error  | 1 warning  | 1 note 

```
checking examples ... ERROR
Running examples in ‘stream-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: DSC_TwoStage
> ### Title: TwoStage Clustering Process
> ### Aliases: DSC_TwoStage
> 
> ### ** Examples
... 17 lines ...
> win_km
Sliding window + k-Means (weighted)
Class: DSC_TwoStage, DSC_Macro, DSC 
Number of micro-clusters: 100 
Number of macro-clusters: 3 
> plot(win_km, stream, type="both")  
> evaluate(win_km, stream, assign="macro")
Error in silhouette.default(clustering, dmatrix = dmat) : 
  object 'sildist' not found
Calls: evaluate -> <Anonymous> -> silhouette -> silhouette.default
Execution halted

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Loading required package: proxy

Attaching package: ‘proxy’

The following objects are masked from ‘package:stats’:

    as.dist, dist

The following object is masked from ‘package:base’:

    as.matrix

Error in get_points.DSD_Memory(replayer, n = 2000) : 
  Not enough data points left in stream! Only 1855 are available.

Error: processing vignette 'stream.Rnw' failed with diagnostics:
 chunk 37 
Error in silhouette.default(clustering, dmatrix = dmat) : 
  object 'sildist' not found
Execution halted


checking installed package size ... NOTE
  installed size is  6.7Mb
  sub-directories of 1Mb or more:
    doc    1.6Mb
    libs   4.5Mb
```

## survey (3.31-5)
Maintainer: "Thomas Lumley" <t.lumley@auckland.ac.nz>

2 errors | 1 warning  | 0 notes

```
checking examples ... ERROR
Running examples in ‘survey-Ex.R’ failed
The error most likely occurred in:

> base::assign(".ptime", proc.time(), pos = "CheckExEnv")
> ### Name: marginpred
> ### Title: Standardised predictions (predictive margins) for regression
> ###   models.
> ### Aliases: marginpred marginpred.svycoxph marginpred.svykmlist
> ###   marginpred.svyglm
... 11 lines ...
> des<-svydesign(id=~1,data=df)
Warning in svydesign.default(id = ~1, data = df) :
  No weights or probabilities supplied, assuming equal probability
> newdf<-data.frame(group=c(FALSE,TRUE), x=c(0,0))
> 
> ## Cox model
> m0<-svycoxph(Surv(time,status)~group,design=des)
Error in fitter(X, Y, strats, offset, init, control, weights = weights,  : 
  object 'Ccoxmart' not found
Calls: svycoxph ... with.default -> eval -> eval -> eval -> eval -> coxph -> fitter
Execution halted

checking tests ... ERROR
  Running ‘DBIcheck.R’
  Comparing ‘DBIcheck.Rout’ to ‘DBIcheck.Rout.save’ ...83,93c83,94
<  [1] "cds"         "stype"       "name"        "sname"       "snum"       
<  [6] "dname"       "dnum"        "cname"       "cnum"        "flag"       
< [11] "pcttest"     "api00"       "api99"       "target"      "growth"     
< [16] "sch_wide"    "comp_imp"    "both"        "awards"      "meals"      
< [21] "ell"         "yr_rnd"      "mobility"    "acs_k3"      "acs_46"     
< [26] "acs_core"    "pct_resp"    "not_hsg"     "hsg"         "some_col"   
< [31] "col_grad"    "grad_sch"    "avg_ed"      "full__1"     "emer"       
... 62 lines ...
  +                        data=nwtco, subset=~I(rel |subcohort))
  > 
  > ##Coefficient results same as Splus with code from
  > ## http://faculty.washington.edu/norm/software.html
  > ## SE slightly larger due to using sandwich variance.
  > 
  > svycoxph(Surv(edrel, rel)~factor(stage)+factor(histol)+I(age/12), design=d_BorganII)
  Error in fitter(X, Y, strats, offset, init, control, weights = weights,  : 
    object 'Ccoxmart' not found
  Calls: svycoxph ... with.default -> eval -> eval -> eval -> eval -> coxph -> fitter
  Execution halted

checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Loading required package: grid
Loading required package: Matrix
Loading required package: survival

Attaching package: ‘survey’

The following object is masked from ‘package:graphics’:

    dotchart

Warning in eval(family$initialize) :
  non-integer #successes in a binomial glm!
Warning in eval(family$initialize) :
  non-integer #successes in a binomial glm!
Warning in eval(family$initialize) :
  non-integer #successes in a binomial glm!

Error: processing vignette 'epi.Rnw' failed with diagnostics:
 chunk 6 
Error in fitter(X, Y, strats, offset, init, control, weights = weights,  : 
  object 'Ccoxmart' not found
Execution halted

```

## TFBSTools (1.14.0)
Maintainer: Ge Tan <ge.tan09@imperial.ac.uk>  
Bug reports: https://github.com/ge11232002/TFBSTools/issues

0 errors | 1 warning  | 3 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
Warning in engine$weave(file, quiet = quiet, encoding = enc) :
  Pandoc (>= 1.12.3) and/or pandoc-citeproc not available. Falling back to R Markdown v1.
Quitting from lines 2-16 (TFBSTools.Rmd) 
Error: processing vignette 'TFBSTools.Rmd' failed with diagnostics:
could not find function "doc_date"
Execution halted


checking installed package size ... NOTE
  installed size is 12.7Mb
  sub-directories of 1Mb or more:
    R  11.9Mb

checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  ‘S4Vectors:::new_SimpleList_from_list’ ‘seqLogo:::pwm2ic’
  See the note in ?`:::` about the use of this operator.

checking compiled code ... NOTE
File ‘TFBSTools/libs/TFBSTools.so’:
  Found no call to: ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## trackeR (0.0.5)
Maintainer: Hannah Frick <h.frick@ucl.ac.uk>  
Bug reports: https://github.com/hfrick/trackeR/issues

0 errors | 1 warning  | 0 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
 6: withVisible(eval(expr, envir, enclos))
 7: withCallingHandlers(withVisible(eval(expr, envir, enclos)), warning = wHandler,     error = eHandler, message = mHandler)
 8: handle(ev <- withCallingHandlers(withVisible(eval(expr, envir,     enclos)), warning = wHandler, error = eHandler, message = mHandler))
 9: timing_fn(handle(ev <- withCallingHandlers(withVisible(eval(expr,     envir, enclos)), warning = wHandler, error = eHandler, message = mHandler)))
10: evaluate_call(expr, parsed$src[[i]], envir = envir, enclos = enclos,     debug = debug, last = i == length(out), use_try = stop_on_error !=         2L, keep_warning = keep_warning, keep_message = keep_message,     output_handler = output_handler, include_timing = include_timing)
11: evaluate(code, envir = env, new_device = FALSE, keep_warning = !isFALSE(options$warning),     keep_message = !isFALSE(options$message), stop_on_error = if (options$error &&         options$include) 0L else 2L, output_handler = knit_handlers(options$render,         options))
12: in_dir(input_dir(), evaluate(code, envir = env, new_device = FALSE,     keep_warning = !isFALSE(options$warning), keep_message = !isFALSE(options$message),     stop_on_error = if (options$error && options$include) 0L else 2L,     output_handler = knit_handlers(options$render, options)))
... 8 lines ...
20: knit2html(..., force_v1 = TRUE)
21: (if (grepl("\\.[Rr]md$", file)) knit2html_v1 else if (grepl("\\.[Rr]rst$",     file)) knit2pdf else knit)(file, encoding = encoding, quiet = quiet,     envir = globalenv())
22: vweave(...)
23: engine$weave(file, quiet = quiet, encoding = enc)
24: doTryCatch(return(expr), name, parentenv, handler)
25: tryCatchOne(expr, names, parentenv, handlers[[1L]])
26: tryCatchList(expr, classes, parentenv, handlers)
27: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    find_vignette_product(name, by = "weave", engine = engine)}, error = function(e) {    stop(gettextf("processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)), domain = NA, call. = FALSE)})
28: buildVignettes(dir = "/home/muelleki/git/R/RSQLite/revdep/checks/trackeR.Rcheck/vign_test/trackeR")
An irrecoverable exception occurred. R is aborting now ...
Segmentation fault (core dumped)
```

## TSdata (2016.8-1)
Maintainer: Paul Gilbert <pgilbert.ttv9z@ncf.ca>

0 errors | 1 warning  | 0 notes

```
checking re-building of vignette outputs ... WARNING
Error in re-building vignettes:
  ...
INFO: Contacting web service with query: https://stats.oecd.org/restsdmx/sdmx.ashx/GetData/QNA/CAN+USA+MEX.B1_GE.CARSA.Q?format=compact_v2
Apr 28, 2017 6:55:13 PM it.bancaditalia.oss.sdmx.client.RestSdmxClient runQuery
INFO: Contacting web service with query: http://ec.europa.eu/eurostat/SDMX/diss-web/rest/dataflow/ESTAT/ei_nama_q/latest
Apr 28, 2017 6:55:13 PM it.bancaditalia.oss.sdmx.client.RestSdmxClient runQuery
INFO: Contacting web service with query: http://ec.europa.eu/eurostat/SDMX/diss-web/rest/dataflow/ESTAT/ei_nama_q/latest
Apr 28, 2017 6:55:13 PM it.bancaditalia.oss.sdmx.client.RestSdmxClient runQuery
INFO: Contacting web service with query: http://ec.europa.eu/eurostat/SDMX/diss-web/rest/datastructure/ESTAT/DSD_ei_nama_q/1.0
... 8 lines ...
INFO: The sdmx call returned messages in the footer:
 Message [code=400, severity=Error, url=null, text=[Error caused by the caller due to incorrect or semantically invalid arguments]]
Apr 28, 2017 6:55:14 PM it.bancaditalia.oss.sdmx.client.RestSdmxClient getData
INFO: The sdmx call returned messages in the footer:
 Message [code=400, severity=Error, url=null, text=[Error caused by the caller due to incorrect or semantically invalid arguments]]

Error: processing vignette 'Guide.Stex' failed with diagnostics:
 chunk 5 
Error in .local(serIDs, con, ...) : 
  ei_nama_q.Q.MIO-EUR.NSA.CP.NA-P72.IT error: it.bancaditalia.oss.sdmx.exceptions.SdmxXmlContentException: The query: ei_nama_q.Q.MIO-EUR.NSA.CP.NA-P72.IT did not match any time series on the provider.
Execution halted
```

## VariantFiltering (1.12.0)
Maintainer: Robert Castelo <robert.castelo@upf.edu>  
Bug reports: https://github.com/rcastelo/VariantFiltering/issues

0 errors | 1 warning  | 4 notes

```
checking sizes of PDF files under ‘inst/doc’ ... WARNING
  ‘gs+qpdf’ made some significant size reductions:
     compacted ‘usingVariantFiltering.pdf’ from 415Kb to 154Kb
  consider running tools::compactPDF(gs_quality = "ebook") on these files

checking installed package size ... NOTE
  installed size is  8.0Mb
  sub-directories of 1Mb or more:
    R         3.7Mb
    extdata   3.5Mb

checking dependencies in R code ... NOTE
Unexported objects imported by ':::' calls:
  'S4Vectors:::labeledLine' 'VariantAnnotation:::.checkArgs'
  'VariantAnnotation:::.consolidateHits'
  'VariantAnnotation:::.returnEmpty'
  See the note in ?`:::` about the use of this operator.
There are ::: calls to the package's namespace in its code. A package
  almost never needs to use ::: for its own objects:
  '.adjustForStrandSense'

checking Rd line widths ... NOTE
Rd file 'MafDb-class.Rd':
  \examples lines wider than 100 characters:
       ## founder mutation in a regulatory element located within the HERC2 gene inhibiting OCA2 expression.

Rd file 'MafDb2-class.Rd':
  \examples lines wider than 100 characters:
       ## founder mutation in a regulatory element located within the HERC2 gene inhibiting OCA2 expression.

Rd file 'VariantFilteringParam-class.Rd':
... 19 lines ...

Rd file 'autosomalRecessiveHeterozygous.Rd':
  \usage lines wider than 90 characters:
                                                                      BPPARAM=bpparam("SerialParam"))

Rd file 'autosomalRecessiveHomozygous.Rd':
  \usage lines wider than 90 characters:
                                                                    use=c("everything", "complete.obs", "all.obs"),
                                                                    BPPARAM=bpparam("SerialParam"))

These lines will be truncated in the PDF manual.

checking compiled code ... NOTE
File ‘VariantFiltering/libs/VariantFiltering.so’:
  Found no call to: ‘R_useDynamicSymbols’

It is good practice to register native routines and to disable symbol
search.

See ‘Writing portable packages’ in the ‘Writing R Extensions’ manual.
```

## vmsbase (2.1.3)
Maintainer: Lorenzo D'Andrea <support@vmsbase.org>

1 error  | 0 warnings | 0 notes

```
checking whether package ‘vmsbase’ can be installed ... ERROR
Installation failed.
See ‘/home/muelleki/git/R/RSQLite/revdep/checks/vmsbase.Rcheck/00install.out’ for details.
```

