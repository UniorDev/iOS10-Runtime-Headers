/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject  {
    id _contextObject;
    double _duration;
    id _propertyListRepresentation;
    id _complexPatternDescription;
}

@property(readonly) id propertyListRepresentation;
@property(readonly) double computedDuration;
@property(retain) id contextObject;
@property(readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property(setter=_setDuration:) double _duration;
@property(setter=_setPropertyListRepresentation:,retain) id _propertyListRepresentation;
@property(setter=_setComplexPatternDescription:,retain) id _complexPatternDescription;

+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (id)noneVibrationPattern;
+ (bool)isValidVibrationPatternPropertyListRepresentation:(id)arg1;

- (id)contextObject;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(bool)arg2;
- (double)computedDuration;
- (id)_complexPatternDescription;
- (id)_propertyListRepresentation;
- (void)setContextObject:(id)arg1;
- (void)_setComplexPatternDescription:(id)arg1;
- (void)_setPropertyListRepresentation:(id)arg1;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(bool)arg2;
- (id)_artificiallyRepeatingPropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (double)_duration;
- (void)_setDuration:(double)arg1;
- (id)init;
- (void)dealloc;

@end