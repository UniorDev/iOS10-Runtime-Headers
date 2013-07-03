/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSMetricsPageEvent, NSArray, SSMetricsConfiguration, NSDate, NSMutableArray, NSDictionary;

@interface SSLookupResponse : NSObject <SSXPCCoding> {
    NSDate *_expirationDate;
    NSMutableArray *_itemOrder;
    SSMetricsPageEvent *_metricsPageEvent;
    NSDictionary *_response;
}

@property(readonly) BOOL mpIsPersonalizedOffer;
@property(copy) NSDate * expirationDate;
@property(readonly) NSArray * allItems;
@property(readonly) SSMetricsConfiguration * metricsConfiguration;
@property(retain) SSMetricsPageEvent * metricsPageEvent;
@property(readonly) NSDictionary * responseDictionary;

+ (BOOL)mpFakeCompletionDataForBuys;
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1;
+ (BOOL)mpShowBuysWithNoCompletionOffer;
+ (BOOL)mpVerboseCMCLogging;

- (id)itemForKey:(id)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (void)setExpirationDate:(id)arg1;
- (id)responseDictionary;
- (void)_setMetricsPageEvent:(id)arg1;
- (id)appStoreURLWithReason:(int)arg1 initialIndex:(int)arg2;
- (id)initWithLocationResponseDictionary:(id)arg1;
- (void)_enumerateItemsWithBlock:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)expirationDate;
- (id)allItems;
- (void)dealloc;
- (id)valueForProperty:(id)arg1;
- (BOOL)mpIsPersonalizedOffer;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1;
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;

@end