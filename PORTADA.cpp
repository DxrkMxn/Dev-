// DESARROLLADOR: Ing. Jhusef Alfonso López Parra
//--------------------------------------------------------------------------------
// Incluir Bibliotecas: stdio.h
#include <stdio.h> // ( Standard-Input-Output ).
#include <conio.h> // ( Console-Input-Output ).
#include <windows.h> // ( Windows-API ).
// Fin de la inclusion de Bibliotecas.
//--------------------------------------------------------------------------------
// Declaracion de variables y constantes globales:
char primerFrame[]=("    .:`  `---..-.        `++`       .- `--. `:     `-     :    -.````/    :    `:    .-  .-.--       --/           -+--\n   .:`       ./---      `--  --`     `-+-     `:     -``...+....--````/..../... :    .-    `/:     `--  --      .---`/ \n `:.       `:.    ---``--      .-` --.  .-     `: `...+`   ..    -   `-   -`   /-.` -.    -. `:  .-.     /  `---`    / \n+/--.`    --         /:-`       `//`      :`  `.-/`   `-    :    -   .`   :   `-  `/:   `:`    o-`       :+-.        / \n`    .--/+-        --   .--`  `--  .-`     -/..   :    .`   -`   -   -   `.   :   .. -.-.    .-`:     --- /          / \n       :.  .---. `:`       .-/-      .-` .-.`-`    -    - ```:```-```:```:`  .`  ..   :/   .-`  /  ---   `:         `o-\n      :`        //--`      .- .-.      //`    ..    -```.-   .   .   .   . `.:` `.  `:  :.-`    /:.      ..   `-----./ \n    .:         :.   .---.`:`     --. --  .-    `. .`..   ``   `   `  `   .  .  .:  `-   :/   `--:`       +:---`     /` \n.--//---.     :`        .+-.`      -/-     ..  `.-`   .   `   `   `  `   `  .  . .-.  .- : .-.  :   `----/         `:  \n  .:    `.-..+--`      `-   ...`  ..  ..     --   ``   `   `  ``  `  `  `  `  `` `-` .`  +-`    :`--.   :`         :   \n `/                                                                                      `             `-              \n /     `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n.      .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM                                                                                      .                          \n   -::     :.........-/........-:........   ``` - INGENIERO DE SISTEMAS -   `..-  `-      .-.         --              -\n`.`      ..:.         `:        `-      `-``````-JHUSEF ALFONSO LOPEZ P.- `:/-.-/::-..  .-`         -:              -:`\n:           -.          :.........::....`.--````- DESARROLLADOR S. & W. --.  --.     .//:-`       -:              .:`  \n:`           -. `.-......--.        .-......--..```` FUSION MEDIA `.---:-`--.     `--.    `---. -:              .:.    \n /        .---:+.          `-- ........-...` ...--...--...`.`.--/:.` .-..:-    `--.          .:/--`           `:.      \n  / .----.`     --`      `--.-:--.     `...--....:-::-..:-:..`  /....`    `:---.          .--`    .--.      `:.        \n--:+.             .:.----.        .:::/:.`    .--     `:-....../-      `-----:         .--`          `--- `:-          \n    -:          `-------`       .--.     ..-/:..--..-/:.`      :.  .---.      :.    .--`                .+/-           \n      --     ---.       .---`---`        .-.        :.      `.-/:-.            -:.--`                .--`   ---        \n       `::--.             .-:-.-.-.-.` .-.         /:-.....-.  .-           `----/`               .--`         ---     \n      ---`---`         `--`          -+---...---..+.            /       ----.     --           .--`               ---  ");
char segundoFrame[]=("     .:`    ------         /+-       .-  .--..-     :`    -`    :    -`    :    -.    -.--   --      -/-.         /  `-\n    `:.       `:---.      --` .-`      -+:     .-     :    ./..../..../..../`   .-    :`   -:-      `--:`         .-+-.\n--.:.        :-    `---`--      .-` .--  --     .-  `.-:... :    :    :    :...-/    :`   `:.:    .-.   /     .---` :  \n ::-----`  --         -/-.        //.     `:    `::..  -`   .`   -    -   ..   :`...:    .-  `: --`     :``---`     /  \n:`      .:+--`      .:`   --.   --  .-`     --..` ..    :    -   .`   -   -   .`   :-`  -`    :+       .-+.         /  \n        --   .---.`:.       `-/:      .-  `...-    ..   `.   -```.-```-`  -   -   :  `/-    -- /    .--`.-          +  \n       :.        ./---      .: .-.      :/`    -`   .. ``-.```.   .   . `-.``-   -   -.:  --   -..--    :`       `-:+--\n---.``:         --    .--.`-.     --` .-` -.    .` ``.-   .   .   .   `  .  `..`.`  -`  /-    `-+       /  `-----` /   \n    -+-----.`  :.        `+--.      -/-    `.`  `.-`  ``   `   `  `   `  `  .  `-` -   -/   .-`-`     .-o--`      :.   \n   `/       `.+-..       :   `..`  ..  ..    `..`  .   `   `   `         `  `  ` `-  `. .---   :   .--`:`         :    \n   /                                                                                     `             .               \n  -    `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n-      .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM                                                                                     ..         ``        `      \n   -::   .../..-.-..`.`:     ``..:.....`-.   ` `- INGENIERO DE SISTEMAS -   `.-.  -`     .-`        `--             :+-\n:`          `:          :`       `-      ..``  `-JHUSEF ALFONSO LOPEZ P.- ./::.::/.    --`        `:.             .-.  \n /           .:       `../:........::....`...```- DESARROLLADOR S. & W. --. .--`  `-:/+.        .-.             .:.    \n `:          `:/......`   `--        ::-.....-...``` FUSION MEDIA `---:: ---     .--.  .---`  .-.             .:.      \n  -.   `----..  --          `/::.....   ...--........--.``..`--:/-.`...-/`    .--`         -+/-             .:.        \n `-+:--`         `:-   `..-..` `.-..  `....` ...-:-::..-:--.`  +....`    -----`         `--.  `--.        .:.          \n-.  .:`            -//:.          .-::-..... .-.`   ``/:....../.      .----/         .--.         ---   .-.            \n      --      `---.   `---`   `---`       `::......./:        /  .---.`     :`    .--`               -/+.              \n       `:.`---.           .://:.        .-.        :.    `..-.o-.`           --.--`                ---  --.            \n       .-:/-`           `--`    ...-.-/+:---------+--.-.-.    /           .---:/                ---       `--.         \n    ---`    .--.      --.           -:           /            /      .----`    `/            ---             `--`     `");
char tercerFrame[]=(".      `:-     `--/-`        `+/.      `:   `--::     :     :     :    :    `-    :`  .-+.     --   .:  `--`     /     \n`     --        -:`---     `-- `:.       +:-`   ..     :    ..    :    :    :    -`    :`--  .-`     .+-.        `:  `-\n`---/+.       .:`     ---`--     `-.  .--`.-     -.    --..../..../..../...-:`  ..   `:   `//`     `--:`         -o--` \n  .:` `----..:.        `::-.       `+/`    `:     --....:    :    -   `-   : `.-/`  `-    -.-.   .-.  `:     .--. /    \n :-        ::---`     --   `--`  `-- `-`     -.`...-`   `-   `.   -   .`   -   : `.:-   `:`  :.--`     / .---     /    \n:`       `:`    .-----        .:/.     .-`  `.::    -`   .`   -   -   -   .   .`  `--. -.    -+      `-o-         /    \n`       .:         :----`     -- --`     -/.`  `-    .`   -```-```-```-```-   .  `-  .+`   -- :   `--. /          /    \n`.-----+/`       `:`    .--..:`    .-.  -- -.    -`   -.````   .  ``  .   .``-   -  `-`- --   ----.    /       .-//---.\n      :` .--.--..:         -:--`     `//    `.`   ..`` .   `   `   `  `  `   ```-  ..  /-    -/-      .- .-----``/     \n     :.        `/-..`     ..   ...  `-` ..    `.`````   `   `         `  `  `  .````  ..- `-- /     .-o-.       /      \n    -.                                          `                                         `           `                \n-..`.  `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n       .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM          `                                                                         .-          `.               \n   -::       `-`        `.        -`...``.``    - INGENIERO DE SISTEMAS -   `-.  -.     --`       `--   `...---.  :    \n              -.         .-      `./.``   ````` -JHUSEF ALFONSO LOPEZ P.- -:/-.--    `--        `--            `//---.`\n   /           -.`........-/-....`` .-.`.``...``- DESARROLLADOR S. & W. --`.--..-----.        .-.             --`     .\n   .-     .----.//`         .-`   `...:-:-..``...``` FUSION MEDIA .--/:`.--`    ---.---`    --`             :-         \n   .+:---.`       --      `...::/:`      `::-::.`.`.--.```....-:--..../:    `---       .--:-`            `:-           \n---` -:            `::-....      `---:-...`    -::-:..-/--.` `+....    --.--.         .--.`--`         `:.             \n      `:.       .---.`---`      `---` .....-://--...-/:......+      .---::         .--`      .--`    .:.               \n        .: `----`        .------`        --.       :.       `:`.---.     .:    `---             .--.:`                 \n        --//.            `--..-.....` `--        .:  .....-.+-.           `:.--.                -----.                `\n    .--.    `--.      `--.          -/---..--...+:...`      /          .----/               `---     .--            `:-\n`---`          `--..--`           .-`          :`           /    `-----`    `/           .--.           --.       `:-  ");
char cuartoFrame[]=("--       --`      .:/:         ./:.     `:`    .:/.`   :     :    `-    :    -`    /--.  :.     .-`/      .--` :`      \n----.` -:`        :- .--     `-- --       --...  -.    `-    :    `-    :    :    :   `:+     .-`   /  `--`     /      \n     :+:--`     :-      --..-.     --   `----     -`    :    -:...-:...:-`  -    -`   .- -. `-.     `o-.        /   .--\n    :.    .---/-         .:--`       :/-`   `:     -` `../... -    -   - `../.. ..   ..   .o.     .--/         `//--`  \n  .:        `:`---.    `:.   .-.   `-.`-.     -`  ../.   .`   -    -   -   -   -:.  -.   .-`:   --`  .-    `---`:`     \n :.        --     `---/.       `-::.    .-`   `::.   -    -   ``   .   -   -   -  ./`   -.  .:--      /`---`    /      \n+----.`   :`        `:`---     `-..-`     .-..` `.    -   ``   . ``-`  .  ``  .`  -`-`.-   `-+      .-o`        /      \n      .-:+--.`     --     .--.--    `-.  `..-`    -    . ``.```.   `  `.``-` `.  .`  ::   -. :   --- .-        `:    `-\n       `:    .--.-/.         /--.     `-/.   `.    .````.   `   `  `   `  ` `-` ``  -`-`--   :--.    /       .-+:-.-.` \n      `/         :`.-..     :   `..   .- ..    .` ``.           `  `      `  ` ..  .  `/   `-+       /`---.-. `-       \n-..`                                                                                      `` `        `                \n  `.`  `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n       .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM                                                                                   ...-`                         \n   -::         :`         -        -``````.``   - INGENIERO DE SISTEMAS -   `/. .-    `--`       .-.---.       .:      \n                /        `-+-......./-..```.``` -JHUSEF ALFONSO LOPEZ P.- -:. --`   .-.       `--`     `------/.       \n    `:       `..-+-......`  --       `-`   ``.``- DESARROLLADOR S. & W. ---:/:..` --`       .--            `--.----.   \n     /---..-..    --          ::.......--:-`````..   FUSION MEDIA .-:--...`   `-:/-.      --.            .-.       `---\n-----.:-            :. `....... ...`    `..:-----`.--..``.-..------.-+.    .--.    `--.`--             --`             \n       .:         .--://`          -/::/-     ...--..-::..``-+....   `:`---         .-::-`          `--                \n         :.  .----`     .--.  `--..      .:/::.....:::.....`/     ..-.::        `---`    .--      .--                  \n         -///`            `://:..      `--`      `-`       /.-.--.     -.    .--.           --` --.                  .-\n     ---.   `--.       .--.      .-.-//:-....-..//........-+`           :.---`               ./+-                  --` \n .---          `--` ---`          `--         .:          :`        .----+`              `---`  `--              -:`   \n-                .//---`        .-.          --           /   .----.      /           .--.         --`        `--      ");
char quintoFrame[]=("-/+.      `-.       .//-        `:/-.     :`     -:.... :     :    :     :    : `..-/     :.     //`        .:o`       \n:  `-----:.        .:` .-.     .-.`:.      -. ....-.    ..    :    :    -`   .-    :`-- `:     .-`:`     .--` /        \n       :-----`   .:.     `--`--`    .-`   `-:/     :`    :    -    :    :    :    :    //    `-.   /  .--`    :`       \n     .:      .-:+-         -:-.       ----.  `:     :    .-...-:.../..../..`-`   :    -` :` -.     `o-`       `:  `.---\n   `:.        -- .---    --`  `--`   .-.-.     :`   `/...`-    -   -    -   /...-`   :`   //     .-./         -o--.    \n--:/        `:`      .-:/`       .---`   `-`    --..``-   `.   -   -   .`  .`  .-.``:   `-`:`  --`  :    `---.`:       \n :.`.-----.--         -.`--.     .-.-.     .. .....   `.   .   ``  .   .   .   -  ./   -.   /--     -----.    :`       \n/`        :-----`    :`     ---`-`   `-.   `-:`   `.   ``   .```.``````.`  .  .   - -.-`  `-+     .-+-        /        \n         :.     `-.:+.        .:-.      .-.`  `.   `.  `.````   `   `  ` `.````  -  ./  `-. :  .--` /        `:    .---\n        -.         : `...`   ..   ...   .`.`    .`  `.`  `   `      `     `  `` .  `. -..   /--`   ..     `../----.`   \n-----                                `                                                     -:          ..`             \n       `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n       .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM                                                                                                                 \n   -::           :         .`       -    ``.``  - INGENIERO DE SISTEMAS -   .-.--`   `--....-.--/`           :`        \n                 `:........./:.......:-.````.`  -JHUSEF ALFONSO LOPEZ P.- -:..-.   .-.       .-. .----.    .:          \n      :.`.........-:         `-`      `..    `.`- DESARROLLADOR S. & W. -:/:/.  `--       `--`         .-://`          \n `-----+-           --      ...:::.......---```````  FUSION MEDIA .-..-...   -//:       --.            --.  `----`     \n-.      --           :/:....`     .--`......---------.``.--..-..-:-:/.   `---`  `--` `--            `--          .---. \n         `:    .----.  `--.      ....--....``....` `.::-...-/-...   /`---`        .///            --.                 -\n          .+/-.`          `-/:-..        ---....../::...``.-    ...--/        `---`  `--       `--`                 .--\n      ----`  --.        `---` ..-.-.``--.       .-`     `.+..-..     :`   `---.         --`  .-.                  --.  \n `---.         .--   ---.          -/:..-..-..:/-.......`/            /---.               ://`                 `--     \n+-               `+//-`         `--`         :.         `:      `------:              `---` .:.              .--       \n --`          `--.    .----`  .-.          .:           / .-----`      :`         `---.       .-.          --`         ");
char sextoFrame[]=("  :+---.    --`       `/+.        .:--.    -.     .. ....+..` `:    :    .. ...+.`  `-     :.  :. `--      `: .---     \n`:`    `--/+`        --  --.     .-.--      --  `../-    -`    :    :    :    -` `.:/    .:     -+.        .//`        \n.       .:` .---   --      `--`--`   `:`     :/.`   :     :    :    :    :   `-   `- --`-.    `-..-     .--  /         \n      `:.       .//-        `-/-`      .-`-.. `:     :    -    :``..:`  ..   :    :    +-    -.   :` .--`    /        `\n.`   --        `:` `---`   --   .-.    .-/.     :    `-`...:...-.   - `.:...--   :   `: `: --     .o-`       /   .----.\n .--+:-.`     --       .-//       `-.--`  `-     -``..--   .    -   .   -   -`..:   .-   .o     --./        .o---`     \n  .:    .----+.        `:``--.     ---.     -.  ..:`   .`   .   .   .   .  `.  ......   -``- `--   :    .---`/         \n .-        `/ .---.`  .-     `--..-    -.    .:.   .`   .   `   `   .   `  .  `.  -:  .-   /-.     /.--.    -.         \n-.        `:       ../:.        /--`     ....` .`   ``   .```.```` `` ``````  .  .` --`  `-+    `--+        /          \n:---.`    :         -.  ...`   :   ...   `..`   `.   ``````         `  `  ````  ``  .. `-. : `--. .`       ..   ```.-.-\n     `                                                                                     :-`                         \n       `ooooo+:`  /o+  +oooooo- +oo:   -oo +oo`    +o+ ooooooo. +oo:   -oo  oo/ `+oooo+/.      :+oo+:`    .+ooo+. +o+  \n       .MMdoomMN. hMN  NMNyyyy: mMMM+  oMM +MMo   oMM/`MMmyyyy- mMMM+  oMM  MMh -MMdoshNMm:  oNMdssmMNo  hMNysyd. dMN  \n   smh`.MMs.-hMN. hMN  NMd....  mMhNMo oMM  dMN. .NMh `MMh....  mMhNMo oMM  MMh -MMo   `mMM.oMMo    sMMo`MMm:`    yMd  \n   ohy`.MMNmNMN+` hMN  NMMMMMM- mMy-NMsoMM  -MMy yMN` `MMMMMMM` mMy-NMsoMM  MMh -MMo    sMM/dMM`    -MMh -yNMMms. sMh  \n   /ds .MMo  /MMy hMN  NMd      mMy -NMdMM   oMM/MM/  `MMy      mMy -NMdMM  MMh -MMo   .mMN`sMM+    oMMo    `/NMm :s/  \n   oMd .MMh+odMM/ hMN  NMNssss+ mMy  .mMMM    mMMMh   `MMmssss/ mMy  .mMMM  MMh -MMhoohNMd-  yMMhoodMMo `dyssyMMs dMm` \n   yMN `ssssso/`  /oo  ooooooo/ +o/   `ooo    -ooo`    ooooooo: +o/   `ooo  oo/ `ssssso/.     ./ssso/`  `+osss+.  /s+  \n   hMM                                                                                                                 \n   -::            `.         -       -`   ``.`  - INGENIERO DE SISTEMAS -   `-.::...-/:...`   -.          `-           \n        .    `...../:........-/.......:-`````.  -JHUSEF ALFONSO LOPEZ P.- .----   --.     `:+/--.        :-            \n    .---+-.-.`      .-         --   `...:-``````- DESARROLLADOR S. & W. -+:-`  .--       --.    `.----`-:              \n----`    :.          `:``.......-:/-`     ...```...` FUSION MEDIA ..`--..` .//-`      .--           `-/---.            \n          --      .-...::-         `:::-........--.::-..---.-.`.:-/-.   .--.` --`  `--`           ---     `---.      .:\n           .+----.        --. `.....`  `...:::::.  `--:-..-/-...  `:.--.        -//.           `--`            ----`:. \n       .---. --.          .-:::..`     .--.     `:/..`   .-  `.....o        .---` `:.        --.                 .-:--.\n. `----`       .--    .---`      `.-/:/-...`  `--``.....:/....     :`   .---`       `:.   .--                  --.     \n/+.               ///-`          .--      `.-+:...``   .-           +---`             `/:-`                 .--        \n  --           .--`  .---.    `--`         .-          /     .-----./`             `---`.:`               --`          \n    -:`     .--`          .-///--.`      `:`       ``.+-----.        /         .---`      .:`          .--             ");
// Fin de las declaracion de variables y constantes.
//--------------------------------------------------------------------------------
// Definiciones de funciones:
// GOTOXY:
// Mueve el cursor de la ventana de texto a la posición según las coordenadas especificadas por los argumentos x e y.
// Si las coordenadas no son válidas entonces la llamda a la función gotoxy es ignorada. Los argumentos no pueden ser 0.
void gotoxy(int x,int y)
{
	HANDLE hcon;
	hcon= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X= x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);
}// La función gotoxy no retorna ningún valor.
// Fin de la funcion GOTOXY.
//--------------------------------------------------------------------------------
// FOTOGRAMAS:
// Cambia secuencialmente los frames definidos como caracteres anteriormente.
// Se alteran los colores de manera secuencial segun el avance de los ciclos.
void fotogramas(){
		for(int i=0;i<18;i++){
		if(i==0){
			system("color 0F");
		}
		if(i==5){
			system("color 04");
		}
		if(i==11){
			system("color 01");
		}
		for(int j=0;j<6;j++){
			switch(j){
				
				case 0: 
				system("CLS");
				printf("%s",primerFrame);
				Sleep(20);
				break;
				case 1: 
				system("CLS");
				printf("%s",segundoFrame);
				Sleep(20);
				break;
				case 2: 
				system("CLS");
				printf("%s",tercerFrame);
				Sleep(20);
				break;
				case 3: 
				if(i==4){
					system("color 0C");
				}
				if(i==10){
					system("color 09");
				}
				system("CLS");
				printf("%s",cuartoFrame);
				Sleep(20);
				break;
				case 4: 
				system("CLS");
				printf("%s",quintoFrame);
				Sleep(20);
				break;
				case 5: 
				if(i==17){
					system("color 0A");
				}
				system("CLS");printf("%s",sextoFrame);
				Sleep(20);
				break;
			}
		}
	}
}// La función fotogramas no retorna ningún valor.
// Fin de la funcion FOTOGRAMAS.
//--------------------------------------------------------------------------------
// DESORDEN ALEATOREO:
// Genera numeros aleatoreos para desordenar de manera alterna la animacion de el falso daño de Terminal.
void desordenAleatoreo(){
	int posicionX=0, posicionY=0, opcion=0;
	int caracter;
	for(int i=0;i<32;i++){
		opcion=(rand() % 5);
		switch(opcion){
			case 0:
				posicionX=(rand() % 120);
				posicionY=(rand() % 30);
				gotoxy(posicionX,posicionY);
				caracter=(rand() % 100) + 34;
				printf("%c",caracter);
				break;
			case 1:
				posicionX=(rand() % 120);
				for(int j=0;j<30;j++){
					gotoxy(posicionX,j);
					caracter=(rand() % 100) + 34;
					printf("%c",caracter);
				}
				break;
			case 2:
				posicionY=(rand() % 30);
				for(int j=0;j<120;j++){
					gotoxy(j,posicionY);
					caracter=(rand() % 100) + 34;
					printf("%c",caracter);
				}
				break;
			case 3:
				posicionX=(rand() % 120);
				posicionY=(rand() % 30);
				gotoxy(posicionX,posicionY);
				caracter=(rand() % 100) + 34;
				printf("%c",caracter);
				break;
			case 4:
				posicionX=(rand() % 120);
				for(int j=0;j<30;j++){
					gotoxy(posicionX,j);
					caracter=(rand() % 100) + 34;
					printf("%c",caracter);
				}
				break;
			case 5:
				posicionX=(rand() % 120);
				posicionY=(rand() % 30);
				gotoxy(posicionX,posicionY);
				caracter=(rand() % 100) + 34;
				printf("%c",caracter);
				break;
		}
	}
}// La función desorden aletoreo no retorna ningún valor.
// Fin de la funcion DESORDEN ALEATOREO.
//--------------------------------------------------------------------------------
// LA MATRIX TE TIENE:
// Animacion basada en The Matrix, se muestra secuencialmente caracteres con esperas a diferentes tiempos.
void laMatrixTeTiene(){
	system("color F0");	Sleep(200);	system("color 0F");	Sleep(200);	system("color A0");	Sleep(200);	system("color 0A");	Sleep(100);	system("CLS");
	gotoxy(6,3); Sleep(1000); printf("T"); Sleep(100); printf("h"); Sleep(500);	printf("e "); Sleep(500); printf("M"); Sleep(100); printf("a");
	Sleep(50); printf("t");	Sleep(100);	printf("r"); Sleep(500); printf("i"); Sleep(100); printf("x"); Sleep(100); printf(" "); Sleep(100);
	printf("h"); Sleep(100); printf("a"); Sleep(300); printf("s"); Sleep(100); printf(" "); Sleep(100);	printf("y"); Sleep(200); printf("o");
	Sleep(100);	printf("u"); Sleep(500);printf("."); Sleep(50);	printf(" "); Sleep(50);	printf("."); Sleep(50);	printf(" "); Sleep(50);	printf(".");
}// La función la matrix te tiene no retorna ningún valor.
// Fin de la funcion LA MATRIX TE TIENE.
//--------------------------------------------------------------------------------
// DATOS ACTUALES:
// Animacion que muestra los datos del programa a mostrar.
void datosActuales(){
	char titulo[]=("PORTADA ANIMADA!");
	system("color F0");
	Sleep(200);
	system("CLS");
	system("color 0F");
	Sleep(2000);
	gotoxy(6,6);
	printf("Nombre del programa: ");
	Sleep(1000);
	gotoxy(10,8);
	printf("%s",titulo);
	Sleep(1500);
	gotoxy(10,8);
	for(int i=0;i<sizeof(titulo);i++){
		printf(" ");
	}
	Sleep(500);
	gotoxy(10,8);
	printf("%s",titulo);
	Sleep(1000);
	gotoxy(4,12);
	char escribir[]="Este Software fue desarrollado por: Ing. Jhusef Lopez";
	for(int i=0;i<sizeof(escribir);i++){
		printf("%c",escribir[i]);
		Sleep(70);
	}
	Sleep(500);
	gotoxy(6,13);
	char escribir2[]="Tecnologo en Atencion Prehospitalaria";
	for(int i=0;i<sizeof(escribir2);i++){
		printf("%c",escribir2[i]);
		Sleep(70);
	}
	Sleep(500);
	gotoxy(8,14);
	char escribir3[]="Ingeniero en Sistemas";
	for(int i=0;i<sizeof(escribir3);i++){
		printf("%c",escribir3[i]);
		Sleep(70);
	}
	Sleep(2000);
	gotoxy(0,24);
	printf(" admin@unix: Presione Enter para inciar el programa. ");
}// La función datos actuales no retorna ningún valor.
// Fin de la funcion DATOS ACTUALES.
//--------------------------------------------------------------------------------
// SALIR PORTADA:
// Animacion que muestra un simbolo de salida.
void salirPortada(){
	for(int i=0;i<20;i++){
		if(i<=4){
			gotoxy((85+i),(15+i));
			printf("%c",219);
		}
		else{
			gotoxy((85+i),(24-i));
				printf("%c",219);
		} Sleep(100);
	}
	gotoxy(0,26);
	Sleep(1000);
}// La función salir portada no retorna ningún valor.
// Fin de la funcion SALIR PORTADA.
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
// Inicio del main, se define con ingreso y egreso de interacciones externas.
main(int argc,char **argv)
{
	//Cuerpo del main:
	fotogramas();
	Sleep(1000);
	desordenAleatoreo();
	Sleep(2000);
	laMatrixTeTiene();
	Sleep(6000);
	datosActuales();
	getch();
	salirPortada();
	//  --->  <<llamado al programa aqui>>  <---
	exit(0); return 0; // Main retorna 0, provoca que la ejecución abandone la función main (los objetos que se salgan de ámbito serán eliminados).
	// Fin del cuerpo del main
} // Fin de la funcion MAIN.
