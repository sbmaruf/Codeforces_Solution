/EN">
<html>
<head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="171e5910ca4ff3e242fe2ad043867299"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery-1.8.3.js"></script>
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
    <meta http-equiv="profileName" content="c5">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="http://st.codeforces.com/s/32024/images/codeforces-telegram-square.png" />
    <link rel="image_src" href="http://st.codeforces.com/s/32024/images/codeforces-telegram-square.png" />
    <meta property="og:title" content="Submission #11531889 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    <meta name="cc" content="0171c5ecfe0faeb6f6048faf73159a7ebcb7bc9b"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #11531889 - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/font-awesome.min.css" type="text/css" charset="utf-8" />

        <link href='//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700&subset=latin,cyrillic' rel='stylesheet' type='text/css'>
        <link href='//fonts.googleapis.com/css?family=Cuprum&subset=latin,cyrillic' rel='stylesheet' type='text/css'>


    <link rel="shortcut icon" type="image/png" href="http://st.codeforces.com/s/32024/favicon.png">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/status.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="http://st.codeforces.com/s/32024/css/community.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/moment.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/pushstream.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/facebox.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/5b4f342416b573f40eca99e19183fb49/en/codeforces-options.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/js/codeforces.js?v=20160131"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="http://st.codeforces.com/s/32024/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="//yandex.st/share/share.js" charset="utf-8"></script>

    <script type="text/javascript" src="http://st.codeforces.com/s/32024/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="http://st.codeforces.com/s/32024/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->


</head>
<body><span style='display:none;' class='csrf-token' data-csrf='171e5910ca4ff3e242fe2ad043867299'>&nbsp;</span>

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
            
            <a href="/"><img src="http://st.codeforces.com/s/32024/images/codeforces-logo-with-telegram.png"/></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;">
            <a href="?locale=en"><img src="http://st.codeforces.com/s/32024/images/flags/24/gb.png" title="In English" alt="In English"/></a>
            <a href="?locale=ru"><img src="http://st.codeforces.com/s/32024/images/flags/24/ru.png" title="По-русски" alt="По-русски"/></a>
        </div>

        <div >
                        <a href="/enter?back=%2Fcontest%2F135%2Fsubmission%2F11531889">Enter</a>
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
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='171e5910ca4ff3e242fe2ad043867299'/>
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
                                        href="/contest/135">Problems</a></li>
        <li><a
                                        href="/contest/135/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/135/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/135/status">Status</a></li>
        <li><a
                                        href="/contest/135/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/135/room/1">Room</a></li>
        <li><a
                                        href="/contest/135/standings">Standings</a></li>
        <li><a
                                        href="/contest/135/customtest">Custom Invocation</a></li>
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

                    <img class="closed" src="http://st.codeforces.com/s/32024/images/icons/control.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="http://st.codeforces.com/s/32024/images/icons/control-270.png"/>
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
    <td>11531889</td>
    <td>
            Practice:<br/>
<a href="/profile/_kryptonyte_" title="Specialist _kryptonyte_" class="rated-user user-cyan">_kryptonyte_</a>    </td>
    <td>
        <a title="B - Rectangle and Square" href="/contest/135/problem/B">135B</a>
         - <span title="problem revision">27</span>
    </td>
    <td>
    GNU C++11
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
    <td>
        62 ms
    </td>
    <td>
        16 KB
    </td>
    <td>2015-06-11 14:00:56</td>
    <td>2015-06-11 14:00:56</td>
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
#include<bits/stdc++.h>
#define rep(i,n) for( int i = 0 ; i < n ; i++ )
#define x first
#define y second
#define eps 1e-9
using namespace std ;


#define MAXD 2
#define FOR(i,b,c) for(int i = b ; i < c ; i++ )
#define eps 1e-9
#define pi acos(-1.0)
double mx = numeric_limits<double>::max()-1 ;
struct Vec {

    int d; //Dimension
    double val[MAXD];//Contains value of each component
    Vec() {
        d=2;
    }
    Vec( double a , double b ,double c ) {
        val[0] = a ;
        val[1] = b ;
        val[2] = c ;
        d = 3 ;
    }
    Vec( double a , double b ) {
        val[0] = a ;
        val[1] = b ;
        d = 2 ;
    }
    Vec add ( Vec b ) {
        Vec res;
        FOR(i,0,d) res.val[i] = val[i] + b.val[i];
        return res;
    }
    Vec sub ( Vec b ) {
        Vec res;
        FOR(i,0,d) res.val[i] = val[i] - b.val[i];
        return res;
    }
    Vec mul ( double t ) {
        Vec res;
        FOR(i,0,d)res.val[i] = val[i] * t;
        return res;
    }
    Vec div ( double t ) {
        Vec res;
        FOR(i,0,d) res.val[i] = val[i] / t;
        return res;
    }
    bool operator == ( Vec b ) {
        FOR(i,0,d) if ( fabs ( val[i] - b.val[i] ) > eps ) return false;
        return true;
    }
    Vec perp2D() {
        Vec res = (*this);
        swap ( res.val[0], res.val[1] );
        res.val[0] *= -1;
        return res;
    }
    double dot ( Vec v ) { //Finds *this (dot) v
        double res = 0;
        d = 2 ;
        for ( int i = 0; i < d; i++ ) res += val[i] * v.val[i];
        return res;
    }
    double length () { //Finds length of current Vec
        return sqrt ( this->dot( *this ) );
    }
    Vec unitVec () {
        return (*this).div ( length() ); // v / ||v||
    }
    double angleBetween ( Vec b ) { //Angle between two Vecs
        double res = dot( b ) / ( length() * b.length() );
        if ( res > 1 ) res = 1;
        if ( res < -1 ) res = -1;
        return acos (res);
    }
    double polarAngle2D() { //Angle from x-axis
        double res = atan2 ( val[1], val[0] );
        if ( res + eps < 0 ) res += 2 * pi;
        return res;
    }
    double dist( Vec a ) {
        if( a.d != d )cout << "Wrong dimension to calculate in sqdist function\n" ;
        double ret = 0 ;
        for( int i = 0 ; i < d ; i++ ) {
            ret += ( val[i] - a.val[i] )*( val[i] - a.val[i] ) ;
        }
        return sqrt(ret) ;
    }
    double sqdist( Vec a ) {
        if( a.d != d )cout << "Wrong dimension to calculate in sqdist function\n" ;
        double ret = 0 ;
        for( int i = 0 ; i < d ; i++ ) {
            ret += ( val[i] - a.val[i] )*( val[i] - a.val[i] ) ;
        }
        return (ret) ;
    }
    double cross2D ( Vec v ) { //Cross the two values. Only for 2D. Z compo 0.
        return val[0]*v.val[1] - val[1]*v.val[0];
    }
    double isLeft( Vec st , Vec en ) {
        return ( (en.val[0] - st.val[0])*(val[1] - st.val[1])
                 - (val[0] - st.val[0])*(en.val[1] - st.val[1]) ) ; ;
    }
};

struct Line {
    Vec a, b; //a is displacement, b is direction.
    //Builds a Line from two points
    Line() {}
    Line( Vec x, Vec y ) {
        a = x;
        b = y.sub ( x );
    }
    Line( Vec x, Vec y , bool p ) {
        a = x;
        b = y;
        //assign a direction vector
    }
    Line LineFromPoints ( Vec x, Vec y ) {
        Line m;
        m.a = x;
        m.b = y.sub ( x );
        return m;
    }
    //Finds point on Line, given t.
    double length() {
        return b.length();
    }
    Vec atPos ( double t ) {
        return a.add ( b.mul ( t ) ); // a + tb;
    }
    double calT( Vec pt ) {
        double d1 = a.dist( pt ) ;
        double d2 = sqrt(b.val[0]*b.val[0]+b.val[1]*b.val[1]) ;
        Vec q = Vec(a.val[0]+b.val[0],a.val[1]+b.val[1]) ;

        double s1 = q.isLeft( Vec(0,0) , a );
        double s2 = pt.isLeft(Vec(0,0) , a ) ;
        double mul = 1 ;
        if( s1 >= 0 && s2 < 0 )mul = -1 ;
        if( s1 < 0 && s2 >= 0 )mul = -1 ;

        return mul*d1/d2 ;
    }
    double LineToPointDistance ( Vec p, double t ) {
        p = p.sub ( a ); //Take it to origin
        t = b.dot ( p ) / ( b.length() * b.length() ); //point of intersection
        Vec x = b.mul ( t ); //tb
        return ( p.sub(x).length() ); //xp length()
    }
    double segmentToPointDistance ( Vec p, double &t ) {
        p = p.sub ( a ); //Take it to origin
        t = b.dot ( p ) / ( b.length() * b.length() );
        if ( t + eps < 0 || t > 1 + eps ) { //Not on segment
            return min ( p.length(), p.sub(b).length() );
        }
        Vec x = b.mul ( t ); //tb
        return ( p.sub(x).length() ); //xp length()
    }
    bool overlapParallel ( Line l ) {
        double p, q, r, s;
        if ( b.val[0] == 0 ) {
            p = a.val[1];
            q = atPos(1).val[1];
            r = l.a.val[1];
            s = l.atPos ( 1 ).val[1];
            if ( min ( r, s ) > max ( p, q ) ) return false;
            if ( max ( r, s ) < min ( p, q ) ) return false;
            return true;
        } else {
            p = a.val[0];
            q = atPos(1).val[0];
            r = l.a.val[0];
            s = l.atPos ( 1 ).val[0];
            if ( min ( r, s ) > max ( p, q ) ) return false;
            if ( max ( r, s ) < min ( p, q ) ) return false;
            return true;
        }
    }
    char LineAndLineIntersection2D ( Line l, double &t, double &s ) {
        if ( b.cross2D ( l.b) == 0 ) {
            if ( l.a.sub(a).cross2D(l.b) == 0 ) {
                if ( overlapParallel ( l ) ) return &#39;o&#39;; //overlaps
                else return &#39;p&#39;; //parallel
            } else return &#39;d&#39;; //disjoint and parallel
        }
        Vec w = a.sub ( l.a );
        Vec p = l.b.perp2D(), z = b.perp2D();
        t = -(w.dot(p))/p.dot(b); //for current Line
        s = w.dot(z)/z.dot(l.b); //for Line l
        return &#39;i&#39;;
    }
    double LineAndLineDistance2D ( Line l ) {
        double t, s; //First check if the intersect
        char r = LineAndLineIntersection2D ( l, t, s );
        if ( r == &#39;i&#39; ) return 0; //Intersects. 0 distance.
        //Parallel Lines
        return LineToPointDistance ( l.a, t );
    }
    double LineAndSegmentDistance2D ( Line l ) {
        double t, s;
        char r = LineAndLineIntersection2D ( l, t, s );
        if ( r == &#39;i&#39; && s + eps > 0 && s < 1 + eps ) {
            return 0; //Valid intersection
        }
        double res = LineToPointDistance ( l.a, t );
        res = min ( res, LineToPointDistance ( l.a.add(l.b), t ) );
        return res;
    }
    double segmentAndSegmentDistance2D ( Line l ) {
        double t, s;
        char r = LineAndLineIntersection2D ( l, t, s );
        if ( r ==&#39;i&#39; && t+eps > 0 && t < 1 + eps && s + eps > 0 && s < 1 + eps ) {
            return 0; //Valid intersection
        }
        double res = segmentToPointDistance ( l.a, t );
        res = min ( res, segmentToPointDistance ( l.a.add(l.b), t ) );
        res = min ( res, l.segmentToPointDistance ( a, t ) );
        res = min ( res, l.segmentToPointDistance ( a.add ( b ), t ) );
        return res;
    }
    Line reflect ( Vec p, Vec norm ) {
        Vec ap = p.sub ( a ); //Starting to Point of Reflection
        norm = norm.unitVec();

        double d = fabs ( ap.dot ( norm ) );

        Vec m = p.add ( norm.mul ( d ) );
        Vec h = m.sub ( a ).mul ( 2 );
        m = a.add ( h );

        Line ray = ray.LineFromPoints ( p, m );
        return ray;
    }
};
Vec P[8] ;
bool isSquare( int i , int j , int k , int l ) {
    double d[6] ;
    d[0] = P[i].dist( P[j] ) ;
    d[1] = P[j].dist( P[k] ) ;
    d[2] = P[k].dist( P[l] ) ;
    d[3] = P[l].dist( P[i] ) ;
    d[4] = P[i].dist( P[k] ) ;
    d[5] = P[j].dist( P[l] ) ;
    double q = sqrt(2)*d[0] ;
    if( d[0] == d[1] && d[1] ==d[2] && d[2] == d[3] && d[3] == d[1] && d[4] == d[5] && fabs(q-d[5]) < eps )return  1 ;
    else return 0 ;
    return 0 ;

}
bool isRec( int i , int j , int k , int l ) {
    double d[6] ;
    d[0] = P[i].dist( P[j] ) ;
    d[1] = P[j].dist( P[k] ) ;
    d[2] = P[k].dist( P[l] ) ;
    d[3] = P[l].dist( P[i] ) ;
    d[4] = P[i].dist( P[k] ) ;
    d[5] = P[j].dist( P[l] ) ;
    if( d[0] == d[2] && d[1] == d[3] && d[4] == d[5] )return 1 ;
    else return 0 ;
}
int main() {


    for( int i =0 ; i < 8; i ++ ) {
        cin >> P[i].val[0] >> P[i].val[1] ;
    }
    bool f = 0 ;
    vector<int>V ;
    for(int i = 0 ; i < 8 ; i++ ) {
        for( int j = 0 ; j < 8 ; j++ ) {
            if( i == j )continue ;
            for(int k = 0 ; k < 8 ; k++ ) {
                if( i == k || j == k )continue ;
                for(int l = 0 ; l < 8 ; l++ ) {
                    if( l == i || l == j || l == k )continue ;
                    if( isSquare(i,j,k,l) ) {
                        for(int m = 0 ; m < 8 ; m++ ) {
                            if( m == i || m == j || m == k || m == l )continue ;
                            for( int n = 0 ; n < 8 ; n++  ) {
                                if( n == i || n == j || n == k || n == l || n == m )continue ;
                                for( int o = 0 ; o < 8 ; o ++ ) {
                                    if( o == i || o == j || o == k || o == l || o == m || o == n )continue ;
                                    for(int p = 0 ; p < 8 ; p++ ) {
                                        if( p == i || p == j || p == k || p == l || p == m || p == n || p == o )continue ;
                                        if( isRec( m,n,o,p) ) {
                                            f = 1 ;
                                            V.push_back(i);
                                            V.push_back(j);
                                            V.push_back(k);
                                            V.push_back(l);
                                            V.push_back(m);
                                            V.push_back(n);
                                            V.push_back(o);
                                            V.push_back(p);
                                            goto down ;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
down :
    ;
    if( f ) {
        cout << "YES\n" ;
        cout << V[0]+1 << " " << V[1]+1 << " " << V[2]+1 << " " << V[3]+1 << "\n" ;
        cout << V[4]+1 << " " << V[5]+1 << " " << V[6]+1 << " " << V[7]+1 << "\n" ;

    } else cout << "NO\n" ;


    return 0 ;
}

