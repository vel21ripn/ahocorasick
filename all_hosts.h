struct host_info host_match[] =
  {
   { "dmqdd6hw24ucf.cloudfront.net", 1 ,"X" },
   { "d25xi40x97liuc.cloudfront.net", 1 ,"X" },
   { ".aiv-delivery.net", 1 ,"X" },
   { ".aiv-cdn.net", 1 ,"X" },
   { "1s3.lvlt.dash.us.aiv-cdn.net.c.footprint.net", 1 ,"X" },
   { ".s.loris.llnwd.net", 1 ,"X" },
   { "atv-ext.amazon.com", 1 ,"X" },
   { "atv-ps.amazon.com", 1 ,"X" },
   { ".media-amazon.com", 1 ,"X" },
   { ".amazonvideo.com", 1 ,"X" },
   { ".primevideo.com", 1 ,"X" },

   { "amazon.", 1 ,"X" },
   { "amazon.com", 1 ,"X" },
   { "images-amazon.com", 1 ,"X" },
   { "amazonaws.com", 1 ,"X" },
   { "amazon-adsystem.com", 1 ,"X" },
   { ".aws.", 1 ,"X" },
   { ".cloudfront.net", 1 ,"X" },
   { ".us-west-2.compute.amazonaws.com", 1 ,"X" },
   { ".teamviewer.com", 1 ,"X" },
   { ".bloombergvault.com", 1 ,"X" },
   { ".bloomberg.com", 1 ,"X" },
   { ".apple-dns.net", 1 ,"X" },
   { "origin-apple.com.akadns.net", 1 ,"X" },
   { "e6858.dsce9.akamaiedge.net", 1 ,"X" },
   { ".mzstatic.com", 1 ,"X" },
   { "aaplimg.com", 1 ,"X" },
   { ".apple.com", 1 ,"X" },
   { ".apple.news", 1 ,"X" },
   { ".cdn-apple.com", 1 ,"X" },
   { ".ls4-apple.com", 1 ,"X" },
   { ".gc-apple.com", 1 ,"X" },
   { ".ls-apple.com", 1 ,"X" },
   { ".apple-cloudkit.com", 1 ,"X" },
   { ".push.apple.com", 1 ,"X" },
   { "push-apple.com", 1 ,"X" },
   { ".icloud.com", 1 ,"X" },
   { ".icloud.com.", 1 ,"X" },
   { ".me.com", 1 ,"X" },
   { ".icloud-content.com", 1 ,"X" },
   { "iosapps.itunes.apple.com", 1 ,"X" },
   { "osxapps.itunes.apple.com", 1 ,"X" },
   { "buy.itunes.apple.com", 1 ,"X" },
   { "su.itunes.apple.com", 1 ,"X" },
   { "se.itunes.apple.com", 1 ,"X" },
   { "myapp.itunes.apple.com", 1 ,"X" },
   { "swscan.apple.com", 1 ,"X" },
   { "itunes-apple.com", 1 ,"X" },
   { "itunes.apple.com", 1 ,"X" },
   { "tlnk.io", 1 ,"X" },
   { "guzzoni.apple.", 1 ,"X" },
   { ".wbagora.com", 1 ,"X" },
   { ".wbplay.com", 1 ,"X" },
   { ".xbox.com", 1 ,"X" },
   { ".xboxlive.com", 1 ,"X" },
   { ".xboxlive.com.akadns.net", 1 ,"X" },
   { ".xboxlive.com.c.footprint.net", 1 ,"X" },
   { "e13555.b.akamaiedge.net", 1 ,"X" },
   { "e1800.d.akamaiedge.net", 1 ,"X" },
   { "e1879.e7.akamaiedge.net", 1 ,"X" },

   { ".cnn.com", 1 ,"X" },
   { ".cnn.net", 1 ,"X" },

   { ".dropbox.com", 1 ,"X" },
   { ".dropboxstatic.com", 1 ,"X" },
   { ".dropbox-dns.com", 1 ,"X" },
   { "log.getdropbox.com", 1 ,"X" },

   { ".ebay.", 1 ,"X" },
   { ".ebay.com", 1 ,"X" },
   { ".ebaystatic.com", 1 ,"X" },
   { ".ebaydesc.com", 1 ,"X" },
   { ".ebayrtm.com", 1 ,"X" },
   { ".ebaystratus.com", 1 ,"X" },
   { ".ebayimg.com", 1 ,"X" },

   /* Detected "instagram.c10r.facebook.com". Omitted "*amazonaws.com" and "*facebook.com" CDNs e.g. "ig-telegraph-shv-04-frc3.facebook.com" */
   { ".instagram.", 1 ,"X" },
   { "instagram.", 1 ,"X" },
   { ".cdninstagram.com", 1 ,"X" },

   { "igcdn-photos-", 1 ,"X" },
   { "instagramimages-", 1 ,"X" },
   { "instagramstatic-", 1 ,"X" },

   { "facebook.com", 1 ,"X" },
   { ".facebook.net", 1 ,"X" },
   { "fbstatic-a.akamaihd.net", 1 ,"X" },
   { ".fbcdn.net", 1 ,"X" },
   { "fbcdn-", 1 ,"X" },
   { ".fbsbx.com", 1 ,"X" },
   { ".fbwat.ch", 1 ,"X" },
   { ".fb.com", 1 ,"X" },
   { ".fb.gg", 1 ,"X" },

   { "speedtest.", 1 ,"X" },
   { ".ooklaserver.net", 1 ,"X" },

   { "ntop.org", 1 ,"X" },

   { "docs.googleusercontent.com", 1 ,"X" },
   { "docs.google.com", 1 ,"X" },

   { "drive-thirdparty.googleusercontent.com", 1 ,"X" },
   { "drive.google.com", 1 ,"X" },

   { "android.clients.google.com", 1 ,"X" },

   /*
     https://www.fastvue.co/sophos/blog/google-data-saver-affect-security-confidentiality-reporting/
     Used by Google Chrome Lite Mode for Android

     This traffic will bypass checks and blocks as it will include all the communications from/to
     the browser instead of using the standard communication mechanisms SSL/HTTP(S)/DNS

     https://github.com/curl/curl/wiki/DNS-over-HTTPS
   */
   { ".googlezip.net", 1 ,"X" },
   { "datasaver.googleapis.com", 1 ,"X" },

   /* http://check.googlezip.net/connect [check browser connectivity] */
   // { ".googlezip.net", 1 ,"X" },

   /*
      https://github.com/bambenek/block-doh/blob/master/db.doh-redirect
      https://github.com/curl/curl/wiki/DNS-over-HTTPS
   */
   { "dns.google", 1 ,"X" },
   { "dns.google.com", 1 ,"X" },
   { "mozilla.cloudflare-dns.com", 1 ,"X" },
   { "cloudflare-dns.com", 1 ,"X" },
   { "commons.host", 1 ,"X" },
   { "doh.libredns.gr", 1 ,"X" },
   { "dns9.quad9.net", 1 ,"X" },
   { "doh.opendns.com", 1 ,"X" },
   { "doh.dns.sb", 1 ,"X" },
   { "doh.netweaver.uk", 1 ,"X" },
   { "dns.dns-over-https.com", 1 ,"X" },
   { "jp.tiarap.org", 1 ,"X" },
   { "dns.dnsoverhttps.net", 1 ,"X" },
   { "doh.powerdns.org", 1 ,"X" },
   { "adblock.mydns.network", 1 ,"X" },
   { "jp.tiar.app", 1 ,"X" },
   { "doh.crypto.sx", 1 ,"X" },
   { "dns.quad9.net", 1 ,"X" },
   { "dns.containerpi.com", 1 ,"X" },
   { "ibksturm.synology.me", 1 ,"X" },
   { "doh.captnemo.in", 1 ,"X" },
   { "dns.rubyfish.cn", 1 ,"X" },
   { "doh.42l.fr", 1 ,"X" },
   { "dns-family.adguard.com", 1 ,"X" },
   { "appliedprivacy.net", 1 ,"X" },
   { "doh.cleanbrowsing.org", 1 ,"X" },
   { "dns10.quad9.net", 1 ,"X" },
   { "doh-ch.blahdns.com", 1 ,"X" },
   { "doh.seby.io", 1 ,"X" },
   { "dns.adguard.com", 1 ,"X" },
   { "ibuki.cgnat.net", 1 ,"X" },
   { "jcdns.fun", 1 ,"X" },
   { "doh-2.seby.io", 1 ,"X" },
   { "doh.tiar.app", 1 ,"X" },
   { "doh.dnswarden.com", 1 ,"X" },
   { "doh-de.blahdns.com", 1 ,"X" },
   { "doh-jp.blahdns.com", 1 ,"X" },
   { "doh.appliedprivacy.net", 1 ,"X" },
   { "doh.tiarap.org", 1 ,"X" },
   { "doh.armadillodns.net", 1 ,"X" },
   { "dns-nyc.aaflalo.me", 1 ,"X" },
   { "dns.aa.net.uk", 1 ,"X" },
   { "dns.aaflalo.me", 1 ,"X" },
   { "dns11.quad9.net", 1 ,"X" },
   { "dns.nextdns.io", 1 ,"X" },
   { "doh.securedns.eu", 1 ,"X" },
   { "rdns.faelix.net", 1 ,"X" },
   { "captnemo.in", 1 ,"X" },
   { "dns.dnshome.de", 1 ,"X" },
   { "doh.dnslify.com", 1 ,"X" },
   { "resolver-eu.lelux.fi", 1 ,"X" },
   { "doh.bortzmeyer.fr", 1 ,"X" },
   { ".doh.dns.snopyta.org", 1 ,"X" },
   { "jarjar.meganerd.nl", 1 ,"X" },
   { "rumpelsepp.org", 1 ,"X" },
   { "dnsnl.alekberg.net", 1 ,"X" },
   { "dnses.alekberg.net", 1 ,"X" },
   { "dnsse.alekberg.net", 1 ,"X" },
   { "odvr.nic.cz", 1 ,"X" },
   { "dns.dnscrypt.ca", 1 ,"X" },
   { "dns1.dnscrypt.ca", 1 ,"X" },
   { "dns2.dnscrypt.ca", 1 ,"X" },
   { "dns.digitale-gesellschaft.ch", 1 ,"X" },
   { "dns1.digitale-gesellschaft.ch", 1 ,"X" },
   { "dns.cloudflare.com", 1 ,"X" },
   { "doh.ffmuc.net", 1 ,"X" },


   /*
     See https://better.fyi/trackers/

     DoubleClick by Google (2mdn.net)
     DoubleClick by Google (doubleclick.net)
     DoubleClick by Google
     Google AdSense by Google (google.com)
     Google AdSense by Google (google.se)
     Google AdSense by Google (googleadservices.com)
     Google Analytics by Google (google-analytics.com)
     Google APIs by Google (ajax.googleapis.com)
     Google Fonts by Google (fonts.googleapis.com)
     Google Interactive Media Ads (imasdk.googleapis.com)
     Google Syndication (googlesyndication.com)
     Google Tag Manager by Google (googletagmanager.com)
     Google Tag Manager by Google (googletagservices.com)
     Gstatic by Google (gstatic.com)
   */

   /* Google Advertisements */
   { ".googlesyndication.com", 1 ,"X" },
   { "googleads.", 1 ,"X" },
   { ".doubleclick.net", 1 ,"X" },
   { "googleadservices.", 1 ,"X" },
   { ".2mdn.net", 1 ,"X" },
   { ".dmtry.com", 1 ,"X" },
   { "google-analytics.", 1 ,"X" },
   { "gtv1.com", 1 ,"X" },

   /* Google Hangout */
   { "images2-hangout-opensocial.googleusercontent.com", 1 ,"X" },

   /* Google Services */
   { "googleapis.com", 1 ,"X" },
   { ".googletagservices.com", 1 ,"X" },
   { "mtalk.google.com", 1 ,"X" },

   { "plus.google.com", 1 ,"X" },
   { "plus.url.google.com", 1 ,"X" },

   { "googleusercontent.com", 1 ,"X" },
   { "1e100.net", 1 ,"X" },

   { "maps.google.", 1 ,"X" },
   { "maps.gstatic.com", 1 ,"X" },

   { ".gmail.", 1 ,"X" },
   { "mail.google.", 1 ,"X" },

   { "google.", 1 ,"X" },
   { ".google.", 1 ,"X" },
   { ".gstatic.com", 1 ,"X" },
   { "ggpht.com", 1 ,"X" },

   { "mail.outlook.com", 1 ,"X" },

   { ".last.fm", 1 ,"X" },

   { "netflix.com", 1 ,"X" },
   { "nflxext.com", 1 ,"X" },
   { "nflximg.com", 1 ,"X" },
   { "nflximg.net", 1 ,"X" },
   { "nflxvideo.net", 1 ,"X" },
   { "nflxso.net", 1 ,"X" },
   { "fast.com", 1 ,"X" },

   { ".skype.", 1 ,"X" },
   { ".skypeassets.", 1 ,"X" },
   { ".skypedata.", 1 ,"X" },
   { ".skypeecs-", 1 ,"X" },
   { ".skypeforbusiness.", 1 ,"X" },
   { ".lync.com", 1 ,"X" },
   { "e7768.b.akamaiedge.net", 1 ,"X" },
   { "e4593.dspg.akamaiedge.net", 1 ,"X" },
   { "e4593.g.akamaiedge.net", 1 ,"X" },
   { "*.gateway.messenger.live.com", 1 ,"X" },
   { "skype-calling-missedcallsregistrar-", 1 ,"X" },

   { ".tuenti.com", 1 ,"X" },

   { ".twttr.com", 1 ,"X" },
   { "twitter.", 1 ,"X" },
   { "twimg.com", 1 ,"X" },

   { ".viber.com", 1 ,"X" },
   { ".cdn.viber.com", 1 ,"X" },
   { ".viber.it", 1 ,"X" },

   { "wikipedia.", 1 ,"X" },
   { "wikimedia.", 1 ,"X" },
   { "mediawiki.", 1 ,"X" },
   { "wikimediafoundation.", 1 ,"X" },

   { "mmg-fna.whatsapp.net", 1 ,"X" },
   { ".whatsapp.", 1 ,"X" },
   { "g.whatsapp.net", 1 ,"X" },
   { "v.whatsapp.net", 1 ,"X" },
   { "mmg.whatsapp.net", 1 ,"X" },

   { ".yahoo.", 1 ,"X" },
   { ".yimg.com", 1 ,"X" },
   { "yahooapis.", 1 ,"X" },

   { "upload.youtube.com", 1 ,"X" },
   { "upload.video.google.com", 1 ,"X" },
   { "youtubei.googleapis.com", 1 ,"X" },
   { "youtube.", 1 ,"X" },
   { "youtu.be", 1 ,"X" },
   { "yt3.ggpht.com", 1 ,"X" },
   { ".googlevideo.com", 1 ,"X" },
   { ".ytimg.com", 1 ,"X" },
   { "youtube-nocookie.", 1 ,"X" },
   { ".youtube-ui.l.google.com", 1 ,"X" },
   { ".youtubeeducation.com", 1 ,"X" },

   { ".vevo.com", 1 ,"X" },

   { ".spotify.com", 1 ,"X" },
   { ".scdn.co", 1 ,"X" },
   { ".pscdn.co", 1 ,"X" },
   { "spotifycdn.net", 1 ,"X" },
   { "spotifycdn.com", 1 ,"X" },
   { "audio4-ak-spotify-com.akamaized.net", 1 ,"X" },
   { "audio-ak-spotify-com.akamaized.net", 1 ,"X" },
   { "heads-ak-spotify-com.akamaized.net", 1 ,"X" },
   { "spotify-com.akamaized.net", 1 ,"X" },
   { "spotify.com.edgesuite.net", 1 ,"X" },
   { "spotify.map.fastly.net", 1 ,"X" },
   { "spotify.edgekey.net", 1 ,"X" },
   { "spotify.demdex.net", 1 ,"X" },
   { ".spotilocal.com", 1 ,"X" },


   { "edge-mqtt.facebook.com", 1 ,"X" },
   { "mqtt-mini.facebook.com", 1 ,"X" },
   { "messenger.com", 1 ,"X" },
   { ".m.me", 1 ,"X" },

   { ".pandora.com", 1 ,"X" },

   { ".torproject.org", 1 ,"X" },

   { ".kakao.com", 1 ,"X" },

   { "ttvnw.net", 1 ,"X" },
   { "jtvnw.net", 1 ,"X" },
   { "twitch.tv", 1 ,"X" },
   { "twitchcdn.net", 1 ,"X" },
   { "twitchsvc.net", 1 ,"X" },

   { ".qq.com", 1 ,"X" },
   { ".gtimg.com", 1 ,"X" },

   { ".weibo.com", 1 ,"X" },
   { ".weibo.cn", 1 ,"X" },
   { ".sinaimg.cn", 1 ,"X" },
   { ".sinajs.cn", 1 ,"X" },
   { ".sina.cn", 1 ,"X" },
   { ".sina.com.cn", 1 ,"X" },

   /* https://support.cipafilter.com/index.php?/Knowledgebase/Article/View/117/0/snapchat---how-to-block */
   { "feelinsonice.appspot.com", 1 ,"X" },
   { "feelinsonice-hrd.appspot.com", 1 ,"X" },
   { "feelinsonice.com", 1 ,"X" },
   { ".snapchat.", 1 ,"X" },
   { ".snapads.", 1 ,"X" },
   { ".sc-cdn.net", 1 ,"X" },
   { ".sc-prod.net", 1 ,"X" },
   { ".sc-jpl.com", 1 ,"X" },
   { "sc-analytics.appspot.com", 1 ,"X" },

   { ".waze.com", 1 ,"X" },
   { "wazespeechactiviation-pa.googleapis.com", 1 ,"X" },

   { ".deezer.com", 1 ,"X" },

   /* Microsoft + Azure */
   { ".wpc.v0cdn.net", 1 ,"X" },
   { ".gfx.ms", 1 ,"X" },
   { ".aka.ms", 1 ,"X" },
   { ".sfx.ms", 1 ,"X" },
   { ".appcenter.ms", 1 ,"X" },
   { "-msedge.net", 1 ,"X" },
   { ".microsoft.us", 1 ,"X" },
   { ".dynamics.com", 1 ,"X" },
   { "msftncsi.com", 1 ,"X" },
   { ".azure.com", 1 ,"X" },
   { ".windows.net", 1 ,"X" },
   { ".windows.com", 1 ,"X" },
   { ".microsoft.com", 1 ,"X" },
   { "msn.com", 1 ,"X" },
   { ".s-msft.com", 1 ,"X" },
   { ".webtrends.com", 1 ,"X" },
   { ".msecnd.net", 1 ,"X" },
   { "bing.com", 1 ,"X" },
   { ".visualstudio.com", 1 ,"X" },
   { "login.live.com", 1 ,"X" },
   { "statics-marketingsites-wcus-ms-com.akamaized.net", 1 ,"X" },
   { "statics-marketingsites-eus-ms-com.akamaized.net", 1 ,"X" },
   { "img-prod-cms-rt-microsoft-com.akamaized.net", 1 ,"X" },
   { "onecollector.cloudapp.aria.akadns.net", 1 ,"X" },
   { "onecollector.akadns.net", 1 ,"X" },
   { "microsoft.akadns.net", 1 ,"X" },
   { "e1723.dscd.akamaiedge.net", 1 ,"X" },
   { ".microsofttranslator.com", 1 ,"X" },
   { "sharepointonline.com", 1 ,"X" },
   { ".msftconnecttest.com", 1 ,"X" },
   { ".windowsmedia.com", 1 ,"X" },
   { ".windowsphone.com", 1 ,"X" },
   { ".msa.akadns6.net", 1 ,"X" },
   { ".s-microsoft.com", 1 ,"X" },
   { ".msidentity.com", 1 ,"X" },
   { ".wac.phicdn.net", 1 ,"X" },
   { ".onestore.ms", 1 ,"X" },
   { ".msedge.net", 1 ,"X" },
   { ".mshome.net", 1 ,"X" },
   { "..msn-com.", 1 ,"X" },
   { ".-s-msn-com.", 1 ,"X" },
   { ".s-msn.com", 1 ,"X" },

   { "teams.microsoft.com", 1 ,"X" },
   { "teams.microsoft.us", 1 ,"X" },
   { "teams.skype.com", 1 ,"X" },
   { "-teams.cloudapp.net", 1 ,"X" },
   { "teams.trafficmanager.net", 1 ,"X" },
   { "teams-msgapi.trafficmanager.net", 1 ,"X" },
   { "teams.office.net", 1 ,"X" },
   { "teams.office.com", 1 ,"X" },

   { ".storage.live.com", 1 ,"X" },
   { "skyapi.live.net", 1 ,"X" },
   { "d.docs.live.net", 1 ,"X" },
   { "onedrive.live.com", 1 ,"X" },

   { "update.microsoft.com", 1 ,"X" },
   { ".windowsupdate.com", 1 ,"X" },
   { ".ntservicepack.microsoft.com", 1 ,"X" },
   { ".wustat.windows.com", 1 ,"X" },

   { "worldofwarcraft.com", 1 ,"X" },

   { ".anchorfree.", 1 ,"X" },
   { "hotspotshield.com", 1 ,"X" },
   { ".northghost.com", 1 ,"X" },

   { ".webex.com", 1 ,"X" },
   { ".zoom.us", 1 ,"X" },

   { ".ocsdomain.com", 1 ,"X" },
   { "ocs.fr", 1 ,"X" },
   { ".ocs.fr", 1 ,"X" },
   { ".labgency.ws", 1 ,"X" },

   { ".iflix.com", 1 ,"X" },
   { ".app.iflixcorp.com", 1 ,"X" },
   { ".images.iflixassets.com", 1 ,"X" },

   { "crl.microsoft.com", 1 ,"X" },
   { "evsecure-ocsp.verisign.com", 1 ,"X" },
   { "evsecure-aia.verisign.com", 1 ,"X" },
   { "evsecure-crl.verisign.com", 1 ,"X" },
   { ".omniroot.com", 1 ,"X" },
   { ".microsoftonline.com", 1 ,"X" },
   { ".microsoftonline.us", 1 ,"X" },
   { ".office365.com", 1 ,"X" },
   { ".office.com", 1 ,"X" },
   { "office.net", 1 ,"X" },
   { ".msocsp.com", 1 ,"X" },
   { ".msocdn.com", 1 ,"X" },
   { "officeapps.live.com", 1 ,"X" },
   { "outlook.live.com", 1 ,"X" },
   { "office.live.com", 1 ,"X" },
   { ".onenote.", 1 ,"X" },

   /* http://www.urlquery.net/report.php?id=1453233646161 */
   { "lifedom.top", 1 ,"X" },
   { "coby.ns.cloudflare.com", 1 ,"X" },
   { "amanda.ns.cloudflare.com", 1 ,"X" },

   { "d295hzzivaok4k.cloudfront.net", 1 ,"X" },
   { ".opendns.com", 1 ,"X" },

   /* https://get.slack.help/hc/en-us/articles/205138367-Troubleshooting-Slack-connection-issues */
   { "slack.com", 1 ,"X" },
   { ".slack-msgs.com", 1 ,"X" },
   { "slack-files.com", 1 ,"X" },
   { "slack-imgs.com", 1 ,"X" },
   { ".slack-edge.com", 1 ,"X" },
   { ".slack-core.com", 1 ,"X" },
   { "slack-redir.net", 1 ,"X" },
   /* Detected "slack-assets2.s3-us-west-2.amazonaws.com.". Omitted "*amazonaws.com" CDN */
   { "slack-assets2.s3-", 1 ,"X" },

   { "github.com", 1 ,"X" },
   { ".github.com", 1 ,"X" },
   { "github.io", 1 ,"X" },
   { ".github.io", 1 ,"X" },
   { "githubusercontent.com", 1 ,"X" },
   { ".githubusercontent.com", 1 ,"X" },

   { ".steampowered.com", 1 ,"X" },
   { "steamcommunity.com", 1 ,"X" },
   { ".steamcontent.com", 1 ,"X" },
   { ".steamstatic.com", 1 ,"X" },
   { "steamcommunity-a.akamaihd.net", 1 ,"X" },

   { ".wechat.com", 1 ,"X" },
   { ".wechat.org", 1 ,"X" },
   { ".wechatapp.com", 1 ,"X" },
   { ".we.chat", 1 ,"X" },
   { ".wx.", 1 ,"X" },
//   { ".weixin.", 1 ,"X" },
   { ".mmsns.qpic.cn", 1 ,"X" },

   { "dnscrypt.org", 1 ,"X" },

   { "torrent.", 1 ,"X" },
   { "torrents.", 1 ,"X" },
   { "torrentz.", 1 ,"X" },

   { ".nintendo.net", 1 ,"X" },
   { ".nintendo.com", 1 ,"X" },

   { ".playstation.net", 1 ,"X" },
   { ".playstation.com", 1 ,"X" },
   { ".sonyentertainmentnetwork.com", 1 ,"X" },

   { ".linkedin.com", 1 ,"X" },
   { ".licdn.com", 1 ,"X" },

   { ".sndcdn.com", 1 ,"X" },
   { ".soundcloud.com", 1 ,"X" },
   { "getrockerbox.com", 1 ,"X" },

   { "web.telegram.org", 1 ,"X" },
   { "tdesktop.com", 1 ,"X" },
   { "tupdate.com", 1 ,"X" },

   { ".pastebin.com", 1 ,"X" },
   { "pastebin.com", 1 ,"X" },

   { ".ppstream.com", 1 ,"X" },
   { ".pps.tv", 1 ,"X" },

   { ".hulustream.com", 1 ,"X" },
   { ".hulu.com", 1 ,"X" },
   { "assetshuluimcom-a.akamaihd.net", 1 ,"X" },
   { "ibhuluimcom-a.akamaihd.net", 1 ,"X" },
   { ".huluad.com", 1 ,"X" },
   { ".huluim.com", 1 ,"X" },

   /*
     VidTO streaming service
   */
   { ".vidto.me", 1 ,"X" },
   { ".vidto.se", 1 ,"X" },

   { "snapcraft.io", 1 ,"X" },
   { "ubuntu.com", 1 ,"X" },

   { "signal.org", 1 ,"X" },
   { "whispersystems.org", 1 ,"X" },

   { "musical.ly", 1 ,"X" },
   { "byteoversea.com", 1 ,"X" },
   { "p16-tiktok-sign-va-h2.ibyteimg.com", 1 ,"X" },
   { "p16-tiktok-sg.ibyteimg.com", 1 ,"X" },
   { "p16-tiktok-va.ibyteimg.com", 1 ,"X" },
   { "p16-va-tiktok.ibyteimg.com", 1 ,"X" },
   { "tiktokcdn.com", 1 ,"X" },
   { "p16-tiktok-va-h2.ibyteimg.com", 1 ,"X" },
   { "p16-tiktokcdn-com.akamaized.net", 1 ,"X" },
   { "tiktokcdn.liveplay.myqcloud.com", 1 ,"X" },
   { "musemuse.cn", 1 ,"X" },
   { "tiktokv.com", 1 ,"X" },
   { "bytecdn.cn", 1 ,"X" },
   { "muscdn.com", 1 ,"X" },
   { "tiktok.com", 1 ,"X" },
   { "byted.org", 1 ,"X" },

   { "brasilbandalarga.com.br", 1 ,"X" },
   { ".eaqbr.com.br", 1 ,"X" },

   { ".net.anydesk.com", 1 ,"X" },

   { "discordapp.com", 1 ,"X" },
   { "discordapp.net", 1 ,"X" },
   { "discord.com", 1 ,"X" },
   { "discord.gg", 1 ,"X" },
   { "discord.media", 1 ,"X" },

   /*
     Amazon Alexa services
   */
   { "alexa.amazon.com", 1 ,"X" },
   { "amazonalexa.com", 1 ,"X" },
   { "avs-alexa-1-na.amazon.com", 1 ,"X" },
   { "avs-alexa-2-na.amazon.com", 1 ,"X" },
   { "avs-alexa-3-na.amazon.com", 1 ,"X" },
   { "avs-alexa-4-na.amazon.com", 1 ,"X" },
   { "avs-alexa-5-na.amazon.com", 1 ,"X" },
   { "avs-alexa-6-na.amazon.com", 1 ,"X" },
   { "avs-alexa-7-na.amazon.com", 1 ,"X" },
   { "avs-alexa-8-na.amazon.com", 1 ,"X" },
   { "avs-alexa-9-na.amazon.com", 1 ,"X" },
   { "avs-alexa-10-na.amazon.com", 1 ,"X" },
   { "avs-alexa-11-na.amazon.com", 1 ,"X" },
   { "avs-alexa-12-na.amazon.com", 1 ,"X" },
   { "avs-alexa-13-na.amazon.com", 1 ,"X" },
   { "avs-alexa-14-na.amazon.com", 1 ,"X" },
   { "avs-alexa-15-na.amazon.com", 1 ,"X" },
   { "avs-alexa-16-na.amazon.com", 1 ,"X" },
   { "avs-alexa-17-na.amazon.com", 1 ,"X" },
   { "avs-alexa-18-na.amazon.com", 1 ,"X" },
   { "avs-alexa-19-na.amazon.com", 1 ,"X" },

   /*
     Tumblr social network service
   */
   { "tumblr.com", 1 ,"X" },

   /*
     Reddit social network service
   */
   { ".redd.it", 1 ,"X" },
   { ".reddit.com", 1 ,"X" },
   { ".redditmedia.com", 1 ,"X" },
   { ".redditstatic.com", 1 ,"X" },
   { ".reddit.map.fastly.net", 1 ,"X" },

   /*
     Pinterest social network service
   */
   { ".pinimg.com", 1 ,"X" },
   { "pinterest.global.map.fastly.net", 1 ,"X" },
   { "pinterest.map.fastly.net", 1 ,"X" },
   { "pinterest.", 1 ,"X" },
   { "pinterest.co.", 1 ,"X" },

   /*
     Disney's DisneyPlus streaming service
   */
   { "dssott.com.akamaized.net", 1 ,"X" },
   { "disney-plus.com", 1 ,"X" },
   { "disneyplus.com", 1 ,"X" },
   { "disneyplus.net", 1 ,"X" },
   { "dssott.com", 1 ,"X" },
   { "disneyplus.com.ssl.sc.omtrdc.net", 1 ,"X" },
   { "search-api-disney.bamgrid.com", 1 ,"X" },

   { NULL, 0, NULL }
  };

