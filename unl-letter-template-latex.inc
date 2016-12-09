% Hey, Emacs! This is a -*- LaTeX -*- file!
%
% Originally from:
% http://tex.stackexchange.com/questions/837/pdf-letterhead-as-document-background
%
% But changed by Carrick Detweiler in 2013 for UNL letterhead



% Measurements are taken directly from the guide
%\usepackage[top=2in,left=1.5in,bottom=0.5in,right=0.625in]{geometry}
% works (below)
%\usepackage[top=2in,left=1in,bottom=1.2in,right=0.8in]{geometry}
\usepackage[top=1in,left=1in,bottom=1.2in,right=0.8in]{geometry}
%\usepackage{fullpage}
\usepackage{graphicx}
\usepackage[colorlinks=false,
            pdfborder={0 0 0},
            ]{hyperref}
\usepackage[absolute]{textpos}
\usepackage{ifthen}
\usepackage{soul}


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
\providecommand\UNLfromdept{Computer Science and Engineering}
\providecommand\UNLfromuniv{University of Nebraska-Lincoln}
\providecommand\UNLBuildingAddress{UNL BUILDING}
\providecommand\UNLfromaddress{\UNLfromname\ \textbullet\ \UNLBuildingAddress\  \textbullet\ Lincoln, NE 68588 }
%\providecommand\UNLfromaddress{NAME \textbullet\ BUILDING ADDRESS \textbullet\ Lincoln, NE 68588 }
\providecommand\UNLfromtel{(402) 472-NUMBER}
\providecommand\UNLfromfax{(402) 472-7767}
\providecommand\UNLfromemail{\url{EMAIL@cse.unl.edu}}
\providecommand\UNLfromweb{\url{http://cse.unl.edu/~WEBSITE}}
\providecommand\UNLtoname{use \textbackslash{}renewcommand\textbackslash{}UNLtoname\{toname\}}
\providecommand\UNLtoaddress{use \textbackslash{}renewcommand\textbackslash{}UNLtoaddress\{address\}}
\providecommand\UNLdate{\today}
\providecommand\UNLopening{Dear \UNLtoname,}
\providecommand\UNLclosing{Sincerely}
% Update this and the next line to the correct path
\providecommand\UNLsignaturefile{signature}
\providecommand\UNLlogofile{UNLlogo}
\providecommand\UNLenclosure{}

\usepackage{fancyhdr}
%\pagestyle{fancy}

\fancypagestyle{letterhead}{
\renewcommand{\footrulewidth}{0pt}
\fancyfoot{}
\fancyfoot[C]{%
    {
    \footnotesize\color{black}\sffamily
    \UNLfromaddress\\[-0.1\baselineskip]
    \UNLfromtel\ \textbullet\ Fax: \UNLfromfax\ \textbullet\ \UNLfromemail\ \textbullet\ \UNLfromweb}\color{black}
    }

\fancyhead{}
\fancyhead[L]{%
    \begin{textblock*}{2in}[0.530,0.912](1.5in,1.33in)
        \includegraphics[width=1.8in]{\UNLlogofile}
    \end{textblock*}
    \begin{textblock*}{6.375in}(1.65in,1.12in) 
        \footnotesize \sffamily
        \hfill \UNLfromname, \UNLfromdegree \\
        \hfill \UNLfromtitle  \\
        \vspace{.05in}
        \hfill \color{black} \UNLfromdept
    \end{textblock*}
    \begin{tikzpicture}[remember picture,overlay]
        \draw[color=black,line width=0.5pt] (current page.north west)+(1.5in,-1.42in) -- ($(-0.47in,-1.42in)+(current page.north east)$);
    \end{tikzpicture}}
\renewcommand{\headrulewidth}{0pt}
}

\AtBeginDocument{
%    \newgeometry{top=2in,left=1in,bottom=1.2in,right=0.8in}

  \mbox{ }
    \vspace{.8in}

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
