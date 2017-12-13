/EN">
<html>
<head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="05d27db3bf1386f121b9252fdbc43239"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        window.standaloneContest = false;
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }
    </script>
    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="c4">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="http://st.codeforces.com/s/62084/images/codeforces-telegram-square.png" />
    <link rel="image_src" href="http://st.codeforces.com/s/62084/images/codeforces-telegram-square.png" />
    <meta property="og:title" content="Submission #10712809 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    <meta name="cc" content="1061c13b2b22559d82c50f8fbc3d456cdc1e5024"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #10712809 - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/font-awesome.min.css" type="text/css" charset="utf-8" />

        <link href='//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700&subset=latin,cyrillic' rel='stylesheet' type='text/css'>
        <link href='//fonts.googleapis.com/css?family=Cuprum&subset=latin,cyrillic' rel='stylesheet' type='text/css'>


    <link rel="shortcut icon" type="image/png" href="http://st.codeforces.com/s/62084/favicon.png">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/status.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/62084/css/community.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/moment.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/pushstream.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/facebox.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/d9b7c1a2bcdd13f212b972aae01f8260/en/codeforces-options.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/js/codeforces.js?v=20160131"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/62084/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="//yandex.st/share/share.js" charset="utf-8"></script>

    <script type="text/javascript" src="http://st.codeforces.com/s/62084/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/62084/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->


</head>
<body><span style='display:none;' class='csrf-token' data-csrf='05d27db3bf1386f121b9252fdbc43239'>&nbsp;</span>

<div class="button-up" style="display: none; opacity: 0.7; width: 50px; height:100%; position: fixed; left: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 3.0rem;"><i class="icon-circle-arrow-up"></i></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile == "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>
<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>
<script type="text/javascript">
    window.fbAsyncInit = function() {
        FB.init({
            appId      : '554666954583323',
            xfbml      : true,
            version    : 'v2.8'
        });
        FB.AppEvents.logPageView();
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
</script>

    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }});

    window.updateTypography();

    Codeforces.signForms();

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 1000
        });
    }, 0);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();


    function showAnnouncements(json) {
        //info("j=" + JSON.stringify(json));

        if (json.t != "a") {
            return;
        }
        // console.log("Got announcement from channel");
        setTimeout(function() {
            Codeforces.showAnnouncements(json.d, "en");
        }, Math.random() * 500);
    }
    if (Codeforces.getParticipantChannel()) {
        Codeforces.subscribe(Codeforces.getParticipantChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getContestChannel()) {
        Codeforces.subscribe(Codeforces.getContestChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getGlobalChannel()) {
        Codeforces.subscribe(Codeforces.getGlobalChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    if (Codeforces.getUserChannel()) {
        Codeforces.subscribe(Codeforces.getUserChannel(), function(json) {
            showAnnouncements(json);
        });
    }

    $(".clickable-title").click(function() {
        Codeforces.alert($(this).attr("title"));
    }).css("position", "relative").css("bottom", "3px");


    Codeforces.reformatTimes();
    Codeforces.initializePubSub();

    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>

<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-743380-5']);
  _gaq.push(['_trackPageview']);

  (function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>


<div id="body">
        

<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br/>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>


<div id="header" style="position: relative;">
    <div style="float:left;">
            
            <a href="/"><img src="http://st.codeforces.com/s/62084/images/codeforces-logo-with-telegram.png"/></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;">
            <a href="?locale=en"><img src="http://st.codeforces.com/s/62084/images/flags/24/gb.png" title="In English" alt="In English"/></a>
            <a href="?locale=ru"><img src="http://st.codeforces.com/s/62084/images/flags/24/ru.png" title="По-русски" alt="По-русски"/></a>
        </div>

        <div >
                        <a href="/enter?back=%2Fcontest%2F535%2Fsubmission%2F10712809">Enter</a>
                     | 
                        <a href="/register">Register</a>
                    
        </div>



    </div>
    <br style="clear: both;"/>
</div>
        

    <div class="roundbox menu-box" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class=""><a href="/">Home</a></li>
                <li class="current"><a href="/contests">Contests</a></li>
                <li class=""><a href="/gyms">Gym</a></li>
                <li class=""><a href="/problemset">Problemset</a></li>
                <li class=""><a href="/groups">Groups</a></li>
                <li class=""><a href="/ratings">Rating</a></li>
                <li class=""><a href="/api/help">API</a></li>
                <li class=""><a href="/calendar">Calendar</a></li>
    </ul>
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='05d27db3bf1386f121b9252fdbc43239'/>
            <input class="search" name="query" data-isPlaceholder="true" value=""/>
        </form>
    <br style="clear: both;"/>
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
            <br style="height: 3em; clear: both;"/>

        <div style="position: relative;">
                <div id="pageContent">
                    <div class="second-level-menu">
<ul class="second-level-menu-list">
        <li><a
                                        href="/contest/535">Problems</a></li>
        <li><a
                                        href="/contest/535/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/535/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/535/status">Status</a></li>
        <li><a
                                        href="/contest/535/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/535/room/1">Room</a></li>
        <li><a
                                        href="/contest/535/standings">Standings</a></li>
        <li><a
                                        href="/contest/535/customtest">Custom Invocation</a></li>
</ul>
</div>


<div class="datatable"
     
     style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                General

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="http://st.codeforces.com/s/62084/images/icons/control.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="http://st.codeforces.com/s/62084/images/icons/control-270.png"/>
                        <input style="padding:0;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"/>
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
<tr>
    <th style="width:2em;">#</th>
    <th style="width:12em;">Author</th>
    <th style="width:2em;">Problem</th>
    <th style="width:2em;">Lang</th>
    <th style="width:8em;">Verdict</th>
    <th style="width:2em;">Time</th>
    <th style="width:2em;">Memory</th>
    <th style="width:4em;">Sent</th>
    <th style="width:4em;">Judged</th>
    <th style="width:4em;">&nbsp;</th>
</tr>
<tr>
    <td>10712809</td>
    <td>
            Contestant:<br/>
<a href="/profile/_kryptonyte_" title="Specialist _kryptonyte_" class="rated-user user-cyan">_kryptonyte_</a>    </td>
    <td>
        <a title="B - Tavas and SaDDas" href="/contest/535/problem/B">535B</a>
         - <span title="problem revision">9</span>
    </td>
    <td>
    GNU C++11
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
    <td>
        31 ms
    </td>
    <td>
        8 KB
    </td>
    <td>2015-04-14 20:15:30</td>
    <td>2015-04-14 21:54:17</td>
    <td>
        <button style="padding: 0.05em; width: 80px;" class="showDiff" title="Compare">Compare</button>
    </td>
</tr>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>

    <div class="roundbox " style="margin-top:2em;font-size:1.1rem;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">&rarr; Source
            <div class="top-links">
            </div>
        </div>
    <pre class="prettyprint lang-cpp program-source" style="padding: 0.5em;">#include<bits/stdc++.h>
using namespace std ;
#define rep(i,n) for( int i = 0 ; i < n ; i++ )
#define ll long long
#define MOD 1000000007


int main() {

    int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444,4447,4474,4477,4744,4747,4774,4777,7444,7447,7474,7477,7744,7747,7774,7777,44444,44447,44474,44477,44744,44747,44774,44777,47444,47447,47474,47477,47744,47747,47774,47777,74444,74447,74474,74477,74744,74747,74774,74777,77444,77447,77474,77477,77744,77747,77774,77777,444444,444447,444474,444477,444744,444747,444774,444777,447444,447447,447474,447477,447744,447747,447774,447777,474444,474447,474474,474477,474744,474747,474774,474777,477444,477447,477474,477477,477744,477747,477774,477777,744444,744447,744474,744477,744744,744747,744774,744777,747444,747447,747474,747477,747744,747747,747774,747777,774444,774447,774474,774477,774744,774747,774774,774777,777444,777447,777474,777477,777744,777747,777774,777777,4444444,4444447,4444474,4444477,4444744,4444747,4444774,4444777,4447444,4447447,4447474,4447477,4447744,4447747,4447774,4447777,4474444,4474447,4474474,4474477,4474744,4474747,4474774,4474777,4477444,4477447,4477474,4477477,4477744,4477747,4477774,4477777,4744444,4744447,4744474,4744477,4744744,4744747,4744774,4744777,4747444,4747447,4747474,4747477,4747744,4747747,4747774,4747777,4774444,4774447,4774474,4774477,4774744,4774747,4774774,4774777,4777444,4777447,4777474,4777477,4777744,4777747,4777774,4777777,7444444,7444447,7444474,7444477,7444744,7444747,7444774,7444777,7447444,7447447,7447474,7447477,7447744,7447747,7447774,7447777,7474444,7474447,7474474,7474477,7474744,7474747,7474774,7474777,7477444,7477447,7477474,7477477,7477744,7477747,7477774,7477777,7744444,7744447,7744474,7744477,7744744,7744747,7744774,7744777,7747444,7747447,7747474,7747477,7747744,7747747,7747774,7747777,7774444,7774447,7774474,7774477,7774744,7774747,7774774,7774777,7777444,7777447,7777474,7777477,7777744,7777747,7777774,7777777,44444444,44444447,44444474,44444477,44444744,44444747,44444774,44444777,44447444,44447447,44447474,44447477,44447744,44447747,44447774,44447777,44474444,44474447,44474474,44474477,44474744,44474747,44474774,44474777,44477444,44477447,44477474,44477477,44477744,44477747,44477774,44477777,44744444,44744447,44744474,44744477,44744744,44744747,44744774,44744777,44747444,44747447,44747474,44747477,44747744,44747747,44747774,44747777,44774444,44774447,44774474,44774477,44774744,44774747,44774774,44774777,44777444,44777447,44777474,44777477,44777744,44777747,44777774,44777777,47444444,47444447,47444474,47444477,47444744,47444747,47444774,47444777,47447444,47447447,47447474,47447477,47447744,47447747,47447774,47447777,47474444,47474447,47474474,47474477,47474744,47474747,47474774,47474777,47477444,47477447,47477474,47477477,47477744,47477747,47477774,47477777,47744444,47744447,47744474,47744477,47744744,47744747,47744774,47744777,47747444,47747447,47747474,47747477,47747744,47747747,47747774,47747777,47774444,47774447,47774474,47774477,47774744,47774747,47774774,47774777,47777444,47777447,47777474,47777477,47777744,47777747,47777774,47777777,74444444,74444447,74444474,74444477,74444744,74444747,74444774,74444777,74447444,74447447,74447474,74447477,74447744,74447747,74447774,74447777,74474444,74474447,74474474,74474477,74474744,74474747,74474774,74474777,74477444,74477447,74477474,74477477,74477744,74477747,74477774,74477777,74744444,74744447,74744474,74744477,74744744,74744747,74744774,74744777,74747444,74747447,74747474,74747477,74747744,74747747,74747774,74747777,74774444,74774447,74774474,74774477,74774744,74774747,74774774,74774777,74777444,74777447,74777474,74777477,74777744,74777747,74777774,74777777,77444444,77444447,77444474,77444477,77444744,77444747,77444774,77444777,77447444,77447447,77447474,77447477,77447744,77447747,77447774,77447777,77474444,77474447,77474474,77474477,77474744,77474747,77474774,77474777,77477444,77477447,77477474,77477477,77477744,77477747,77477774,77477777,77744444,77744447,77744474,77744477,77744744,77744747,77744774,77744777,77747444,77747447,77747474,77747477,77747744,77747747,77747774,77747777,77774444,77774447,77774474,77774477,77774744,77774747,77774774,77774777,77777444,77777447,77777474,77777477,77777744,77777747,77777774,77777777,444444444,444444447,444444474,444444477,444444744,444444747,444444774,444444777,444447444,444447447,444447474,444447477,444447744,444447747,444447774,444447777,444474444,444474447,444474474,444474477,444474744,444474747,444474774,444474777,444477444,444477447,444477474,444477477,444477744,444477747,444477774,444477777,444744444,444744447,444744474,444744477,444744744,444744747,444744774,444744777,444747444,444747447,444747474,444747477,444747744,444747747,444747774,444747777,444774444,444774447,444774474,444774477,444774744,444774747,444774774,444774777,444777444,444777447,444777474,444777477,444777744,444777747,444777774,444777777,447444444,447444447,447444474,447444477,447444744,447444747,447444774,447444777,447447444,447447447,447447474,447447477,447447744,447447747,447447774,447447777,447474444,447474447,447474474,447474477,447474744,447474747,447474774,447474777,447477444,447477447,447477474,447477477,447477744,447477747,447477774,447477777,447744444,447744447,447744474,447744477,447744744,447744747,447744774,447744777,447747444,447747447,447747474,447747477,447747744,447747747,447747774,447747777,447774444,447774447,447774474,447774477,447774744,447774747,447774774,447774777,447777444,447777447,447777474,447777477,447777744,447777747,447777774,447777777,474444444,474444447,474444474,474444477,474444744,474444747,474444774,474444777,474447444,474447447,474447474,474447477,474447744,474447747,474447774,474447777,474474444,474474447,474474474,474474477,474474744,474474747,474474774,474474777,474477444,474477447,474477474,474477477,474477744,474477747,474477774,474477777,474744444,474744447,474744474,474744477,474744744,474744747,474744774,474744777,474747444,474747447,474747474,474747477,474747744,474747747,474747774,474747777,474774444,474774447,474774474,474774477,474774744,474774747,474774774,474774777,474777444,474777447,474777474,474777477,474777744,474777747,474777774,474777777,477444444,477444447,477444474,477444477,477444744,477444747,477444774,477444777,477447444,477447447,477447474,477447477,477447744,477447747,477447774,477447777,477474444,477474447,477474474,477474477,477474744,477474747,477474774,477474777,477477444,477477447,477477474,477477477,477477744,477477747,477477774,477477777,477744444,477744447,477744474,477744477,477744744,477744747,477744774,477744777,477747444,477747447,477747474,477747477,477747744,477747747,477747774,477747777,477774444,477774447,477774474,477774477,477774744,477774747,477774774,477774777,477777444,477777447,477777474,477777477,477777744,477777747,477777774,477777777,744444444,744444447,744444474,744444477,744444744,744444747,744444774,744444777,744447444,744447447,744447474,744447477,744447744,744447747,744447774,744447777,744474444,744474447,744474474,744474477,744474744,744474747,744474774,744474777,744477444,744477447,744477474,744477477,744477744,744477747,744477774,744477777,744744444,744744447,744744474,744744477,744744744,744744747,744744774,744744777,744747444,744747447,744747474,744747477,744747744,744747747,744747774,744747777,744774444,744774447,744774474,744774477,744774744,744774747,744774774,744774777,744777444,744777447,744777474,744777477,744777744,744777747,744777774,744777777,747444444,747444447,747444474,747444477,747444744,747444747,747444774,747444777,747447444,747447447,747447474,747447477,747447744,747447747,747447774,747447777,747474444,747474447,747474474,747474477,747474744,747474747,747474774,747474777,747477444,747477447,747477474,747477477,747477744,747477747,747477774,747477777,747744444,747744447,747744474,747744477,747744744,747744747,747744774,747744777,747747444,747747447,747747474,747747477,747747744,747747747,747747774,747747777,747774444,747774447,747774474,747774477,747774744,747774747,747774774,747774777,747777444,747777447,747777474,747777477,747777744,747777747,747777774,747777777,774444444,774444447,774444474,774444477,774444744,774444747,774444774,774444777,774447444,774447447,774447474,774447477,774447744,774447747,774447774,774447777,774474444,774474447,774474474,774474477,774474744,774474747,774474774,774474777,774477444,774477447,774477474,774477477,774477744,774477747,774477774,774477777,774744444,774744447,774744474,774744477,774744744,774744747,774744774,774744777,774747444,774747447,774747474,774747477,774747744,774747747,774747774,774747777,774774444,774774447,774774474,774774477,774774744,774774747,774774774,774774777,774777444,774777447,774777474,774777477,774777744,774777747,774777774,774777777,777444444,777444447,777444474,777444477,777444744,777444747,777444774,777444777,777447444,777447447,777447474,777447477,777447744,777447747,777447774,777447777,777474444,777474447,777474474,777474477,777474744,777474747,777474774,777474777,777477444,777477447,777477474,777477477,777477744,777477747,777477774,777477777,777744444,777744447,777744474,777744477,777744744,777744747,777744774,777744777,777747444,777747447,777747474,777747477,777747744,777747747,777747774,777747777,777774444,777774447,777774474,777774477,777774744,777774747,777774774,777774777,777777444,777777447,777777474,777777477,777777744,777777747,777777774,777777777} ;
    int n ;
    cin >> n ;
    for(int i = 0 ; ; i++ ){
        if( arr[i] == n ){
            cout << i+1 << endl ;
            return 0 ;
        }
    }

}
