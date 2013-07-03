/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSURL, NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying, QLPreviewItem> {
    NSString *_urlString;
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
}

@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;
@property(readonly) NSString * phoneNumber;
@property(readonly) int addressBookUID;
@property(readonly) BOOL forceAssist;
@property(readonly) BOOL suppressAssist;
@property(readonly) BOOL wasAlreadyAssisted;
@property(readonly) int callService;

+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned int)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_web_URLWithComponents:(struct { id x1; id x2; id x3; id x4; int x5; id x6; id x7; id x8; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)faceTimeAcceptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeAcceptURLWithURL:(id)arg1 conferenceID:(id)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 forceAssist:(BOOL)arg4 suppressAssist:(BOOL)arg5 wasAssisted:(BOOL)arg6;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)_web_uniqueWebDataURL;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)uniqueURLWithRelativePart:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)mapsURLWithAddress:(id)arg1;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)ab_faceTimeURLWithDestinationID:(id)arg1;
+ (id)ab_URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)unescapedStringForString:(id)arg1;
+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterRequestTokenURL;
+ (void)SLTwitterFetchDataAtURL:(id)arg1 completionBlock:(id)arg2;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)SLTwitterShowUserURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterProfileImageURLForScreenName:(id)arg1;
+ (id)URLForFacebookPageAtPath:(id)arg1;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (BOOL)_isBetaSwitchEnabledForKey:(struct __CFString { }*)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (int)classicPortForScheme:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)gs_fileURLWithFileSystemRepresentation:(const char *)arg1;
+ (id)URLWithPackagePart:(id)arg1;
+ (id)filePathURLWithEscapes:(id)arg1;
+ (id)relativeURLWithEscapes:(id)arg1;
+ (id)improperlyEscapedString:(id)arg1;
+ (id)properlyEscapedString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)classicPortForScheme:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)termsAndConditionsURL;

- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (BOOL)setResourceValues:(id)arg1 error:(id*)arg2;
- (BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned int)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
- (BOOL)isFileReferenceURL;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)fileReferenceURL;
- (BOOL)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)bookmarkDataWithOptions:(unsigned int)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (id)filePathURL;
- (BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (BOOL)_isSafeFileForBackgroundUpload:(int)arg1;
- (id)resourceSpecifier;
- (id)init;
- (BOOL)isFileURL;
- (id)initWithString:(id)arg1;
- (struct __CFURL { }*)_cfurl;
- (id)parameterString;
- (id)query;
- (id)fragment;
- (id)password;
- (id)user;
- (id)port;
- (id)host;
- (id)scheme;
- (id)baseURL;
- (id)relativeString;
- (id)absoluteURL;
- (id)initFileURLWithPath:(id)arg1;
- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)finalize;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)fileSystemRepresentation;
- (id)path;
- (id)relativePath;
- (id)standardizedURL;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)_relativeURLPath;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(BOOL)arg1;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (BOOL)_isAbsolute;
- (void)_freeClients;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
- (id)absoluteString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingPathExtension;
- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)pathComponents;
- (id)pathExtension;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2;
- (id)URLByDeletingLastPathComponent;
- (id)lastPathComponent;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_scriptIfJavaScriptURL;
- (struct { id x1; id x2; id x3; id x4; int x5; id x6; id x7; id x8; })_web_URLComponents;
- (BOOL)_web_isJavaScriptURL;
- (id)_URLByEscapingSpacesAndControlChars;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_hostString;
- (BOOL)conformsToOverridePatternWithKey:(id)arg1;
- (id)facebookURL;
- (id)photosURL;
- (id)iTunesStoreURL;
- (id)fmipURL;
- (id)fmfURL;
- (id)gamecenterURL;
- (id)youTubeURL;
- (id)mapsURL;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)URLWithNewQueryParameterDictionary:(id)arg1;
- (id)queryParameters;
- (BOOL)isUpgradeURL;
- (BOOL)isFaceTimeAudioAcceptURL;
- (BOOL)isFaceTimeAudioPromptURL;
- (BOOL)isFaceTimeAcceptURL;
- (BOOL)isFaceTimePromptURL;
- (BOOL)isFaceTimeURL;
- (BOOL)_isPhoneNumberID:(id)arg1;
- (id)faceTimeDestinationAccount;
- (BOOL)isFaceTimeAudioURL;
- (BOOL)isValidFaceTimeURL;
- (id)telephonyParameterDictionary;
- (id)webSafeTelephoneURL;
- (BOOL)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)formattedPhoneNumber;
- (BOOL)wasAlreadyAssisted;
- (BOOL)suppressAssist;
- (BOOL)forceAssist;
- (int)callService;
- (int)addressBookUID;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (BOOL)hasTelephonyScheme;
- (id)phoneNumber;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_hostString;
- (id)_web_dataForURLComponentType:(long)arg1;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_URLWithLowercasedScheme;
- (BOOL)_webkit_shouldLoadAsEmptyDocument;
- (id)_web_URLByRemovingUserInfo;
- (id)_webkit_URLByRemovingResourceSpecifier;
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)arg1;
- (const char *)_web_URLCString;
- (id)_web_originalData;
- (id)_web_hostData;
- (id)_web_schemeData;
- (BOOL)_web_isEmpty;
- (BOOL)_webkit_isFTPDirectoryURL;
- (BOOL)_webkit_isFileURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (BOOL)_webkit_isJavaScriptURL;
- (id)_webkit_youTubeURL;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (id)_web_userVisibleString;
- (id)_web_originalDataAsString;
- (id)_webkit_URLByRemovingFragment;
- (BOOL)isHTTPOrHTTPSURL;
- (BOOL)isJavaScriptURL;
- (BOOL)isWebcalURL;
- (BOOL)isSpringboardHandledURL;
- (id)radarWebURL;
- (id)appleStoreURL;
- (id)itmsURL;
- (id)phobosURL;
- (BOOL)isGoogleMapsURL;
- (BOOL)_isGoogleMapsDomain:(id)arg1 subdomain:(id)arg2 path:(id)arg3 queryKeysAndValues:(id)arg4;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (BOOL)isInternalUIKitURL;
- (id)_geo_portionAfterHostname;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (BOOL)isStoreServicesURL;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)cacheKeyRepresentation;
- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)_gkQueryDictionary;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (BOOL)_gkIsSecure;
- (BOOL)_gkIsValidServerURL;
- (void)enumerateQueryWithBlock:(id)arg1;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)schemeSwizzledURL;
- (BOOL)isSafeExternalURL;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1;
- (id)sanitizedURL;
- (id)previewItemURL;
- (BOOL)hasKnownStoreDomain;
- (BOOL)isAssetURL;
- (BOOL)isAppStoreURL;
- (BOOL)isMusicStoreURL;
- (BOOL)isAMOSCommittedIdentifier;
- (BOOL)isAMOSIdentifier;
- (id)CDVFileSystemSafePath;
- (BOOL)CDVIsEqualToURL:(id)arg1;
- (id)CDVServerURLWithPath:(BOOL)arg1;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVPassword;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(BOOL)arg7;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithUser:(id)arg1;
- (id)CDVRawLastPathComponent;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)CDVRawPath;
- (id)CDVServerURL;
- (id)CDVURLByDeletingLastPathComponent;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)serverURL;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)unquotedPassword;
- (BOOL)isEqualToURL:(id)arg1;
- (id)queryParameters;
- (id)lastPathComponent;
- (BOOL)absoluteURLisEqual:(id)arg1;
- (id)URLWithoutPassword;
- (id)initWithDirtyString:(id)arg1;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithoutUsername;
- (id)uri;
- (void)attachSandboxExtension:(id)arg1;
- (const char *)gs_fileSystemRepresentation;
- (BOOL)isInternalToPackage;
- (id)initWithPackagePart:(id)arg1;
- (BOOL)isRelative;
- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithoutUsername;
- (id)uri;
- (id)urlBySettingPath:(id)arg1;
- (id)urlBySettingPort:(id)arg1;
- (id)urlBySettingHost:(id)arg1;
- (id)urlBySettingScheme:(id)arg1;
- (id)urlByRemovingUsername;
- (BOOL)isEqualToDAVURL:(id)arg1;
- (id)urlBySettingPath:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingPort:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingHost:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingScheme:(id)arg1 keepUsername:(BOOL)arg2;
- (id)rawPath;
- (id)urlBySettingUsername:(id)arg1;
- (id)pathWithoutTrailingRemovingSlash;
- (id)leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)mf_firstPartNumber;
- (id)mf_partNumbers;
- (BOOL)mf_isValidAttachmentURL;
- (unsigned int)mf_rowID;
- (id)mf_lastPartNumber;
- (int)storeURLType;
- (id)WF_normalizedRelativePath;
- (id)WF_hostnameFromSecondLevelDomain;
- (BOOL)WF_hostnameIsIPAddress;

@end