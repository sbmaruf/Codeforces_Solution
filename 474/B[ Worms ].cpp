/EN">
<html>
<head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="7360f0518b530d22a0bba7c8ccc11e76"/>
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
    <meta property="og:title" content="Submission #9200900 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    <meta name="cc" content="a504589ea705dc9f691d6669eb31052d956290bb"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #9200900 - Codeforces</title>
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
<body><span style='display:none;' class='csrf-token' data-csrf='7360f0518b530d22a0bba7c8ccc11e76'>&nbsp;</span>

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
                        <a href="/enter?back=%2Fcontest%2F474%2Fsubmission%2F9200900">Enter</a>
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
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='7360f0518b530d22a0bba7c8ccc11e76'/>
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
                                        href="/contest/474">Problems</a></li>
        <li><a
                                        href="/contest/474/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/474/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/474/status">Status</a></li>
        <li><a
                                        href="/contest/474/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/474/room/1">Room</a></li>
        <li><a
                                        href="/contest/474/standings">Standings</a></li>
        <li><a
                                        href="/contest/474/customtest">Custom Invocation</a></li>
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
    <td>9200900</td>
    <td>
            Practice:<br/>
<a href="/profile/_kryptonyte_" title="Specialist _kryptonyte_" class="rated-user user-cyan">_kryptonyte_</a>    </td>
    <td>
        <a title="B - Worms" href="/contest/474/problem/B">474B</a>
         - <span title="problem revision">17</span>
    </td>
    <td>
    GNU C++0x
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
    <td>
        514 ms
    </td>
    <td>
        1560 KB
    </td>
    <td>2014-12-19 22:36:04</td>
    <td>2014-12-19 22:36:04</td>
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
struct data{
    int q ;
    int idx ;
    int ans ;
};
bool comp(data a , data b){
    return a.q<b.q ;
}
bool comp1(data a , data b){
    return a.idx<b.idx ;
}
int main(){

    int n ;
    while( cin >> n ){
        int arr[n] ;
        for( int i = 0 ; i < n ; i++ )cin >> arr[i] ;
        int m ;
        cin >> m ;
        data P[m] ;
        //set<int>s ;
        for( int j = 0 ; j < m ; j++ ){
            cin >> P[j].q ;
            P[j].idx = j ;
            //s.insert( P[i] ) ;
        }
        sort( P , P+m , comp ) ;
        int wormst = 1 ;
        int wormen = 1 ;
        int idx = 0 ;
        for( int j = 0 ; j < n ; j++ ){
            wormen = wormst+arr[j]-1 ;
            while( P[idx].q >= wormst && P[idx].q <= wormen && idx < m ){
                P[idx].ans = j+1 ;
                idx++ ;
            }
            if( idx == m ) break ;
            wormst = wormen+1 ;
        }
        sort( P , P+m , comp1 );
        for( int i = 0 ; i < m ;i++ ){
            cout << P[i].ans << endl ;
        }
    }



    return 0 ;
}
