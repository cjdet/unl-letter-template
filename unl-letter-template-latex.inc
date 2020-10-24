% Hey, Emacs! This is a -*- LaTeX -*- file!
%
% Originally from:
% http://tex.stackexchange.com/questions/837/pdf-letterhead-as-document-background
%
% But changed by Carrick Detweiler in 2013 for UNL letterhead
% Changed again in 2020 for new UNL template



% Measurements are taken directly from the guide
%\usepackage[top=2in,left=1.5in,bottom=0.5in,right=0.625in]{geometry}
% works (below)
%\usepackage[top=2in,left=1in,bottom=1.2in,right=0.8in]{geometry}
\usepackage[top=1in,left=.75in,bottom=1.2in,right=0.75in]{geometry}
%\usepackage{fullpage}
\usepackage{graphicx}
\usepackage[colorlinks=false,
            pdfborder={0 0 0},
            ]{hyperref}
\usepackage[absolute]{textpos}
\usepackage{ifthen}
\usepackage{soul}

%Arial font
\usepackage{helvet}

% --- For placement of the horizontal line
\usepackage{tikz}
\usetikzlibrary{calc}

% Remove paragraph indentation
\parindent0pt
\setlength{\parskip}{0.8\baselineskip}
\raggedright
\pagestyle{empty}
% Ensure consistency in the footer
\urlstyle{sf}

\providecommand\UNLfromname{NAME}
\providecommand\UNLfromtitle{RANK (e.g. Associate Professor)}
\providecommand\UNLfromdegree{Ph.D.}
\providecommand\UNLfootertitle{\UNLfromname, \UNLfromtitle} 
\providecommand\UNLfromdept{Department of Computer Science and Engineering}
\providecommand\UNLfromuniv{University of Nebraska-Lincoln}
\providecommand\UNLBuildingAddress{256 Avery Hall}
\providecommand\UNLcityzip{Lincoln, NE 68588}
\providecommand\UNLfromtel{402.472.NUMBER}
\providecommand\UNLfromfax{(402) 472-7767} %CSE dept fax
\providecommand\UNLfromemail{\url{EMAIL@cse.unl.edu}}
\providecommand\UNLfromweb{\url{cse.unl.edu}}
\providecommand\UNLtoname{use \textbackslash{}renewcommand\textbackslash{}UNLtoname\{toname\}}
\providecommand\UNLtoaddress{use \textbackslash{}renewcommand\textbackslash{}UNLtoaddress\{address\}}
\providecommand\UNLdate{\today}
\providecommand\UNLopening{Dear \UNLtoname,}
\providecommand\UNLclosing{Sincerely}
% Update this and the next line to the correct path
\providecommand\UNLsignaturefile{signature}
\providecommand\UNLlogofile{UNLlogo}
\providecommand\UNLNfile{Nebraska_N_4c}
\providecommand\UNLenclosure{}

\usepackage{fancyhdr}
%\pagestyle{fancy}

\fancypagestyle{letterhead}{
\renewcommand{\footrulewidth}{0pt}
\fancyfoot{}
\fancyfoot[L]{%
    \begin{textblock*}{2in}[0.530,0.912](1.77in,10.47in)
        \includegraphics[width=1.2in]{\UNLlogofile}
    \end{textblock*}
    \begin{textblock*}{5in}(2.0in,10.1in)
      \tiny \sffamily
      \UNLfootertitle \\
            \vspace{.02in}
      {\bf \UNLfromdept} \\
            \vspace{.02in}
      \UNLBuildingAddress ~~$\vert$~~ \UNLcityzip ~~$\vert$~~ \UNLfromtel ~~$\vert$~~ \UNLfromemail\\
            \vspace{.02in}
      \UNLfromweb
    \end{textblock*}
    }

\fancyhead{}
\fancyhead[L]{%
    \begin{textblock*}{2in}[0.530,0.912](4.885in,1.185in)
        \includegraphics[height=.75in]{\UNLNfile}
    \end{textblock*}
}
    \renewcommand{\headrulewidth}{0pt}
}

\AtBeginDocument{
%    \newgeometry{top=2in,left=1in,bottom=1.2in,right=0.8in}

  \mbox{ }
    \vspace{.25in}

    \UNLdate

    %Only put the to name if the address is not empty
    \ifthenelse{\equal{\UNLtoaddress}{}}{}{\UNLtoname\\}
    \UNLtoaddress
    \bigskip

    \UNLopening\par
    }

\AtEndDocument{
    \par\vspace{2ex}
    \UNLclosing,

    \ifthenelse{\equal{\UNLsignaturefile}{}}{\bigskip\bigskip}{\vspace{-.1in}\includegraphics[width=2in]{\UNLsignaturefile}\vspace{-.1in}}

    \UNLfromname \\
    \UNLfromtitle \\
    \UNLfromdept \\
    \UNLenclosure
}
