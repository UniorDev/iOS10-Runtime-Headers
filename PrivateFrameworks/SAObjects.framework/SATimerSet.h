/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SATimerObject;

@interface SATimerSet : SADomainCommand  {
}

@property(retain) SATimerObject * timer;

+ (id)setWithDictionary:(id)arg1 context:(id)arg2;
+ (id)set;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setTimer:(id)arg1;
- (id)timer;
- (id)groupIdentifier;

@end