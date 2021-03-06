/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVibrancyEffect : UIVisualEffect {
    long long  _blurStyle;
    bool  _invertAutomaticStyle;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)effectForBlurEffect:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)_blurStyle;
- (id)_highQualityEffectConfig;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (id)_lowQualityEffectConfig;
- (id)_reduceTransparencyEffectConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

+ (id)notificationCenterVibrancyEffect;
+ (id)widgetPrimaryHighlightVibrancyEffect;
+ (id)widgetPrimaryVibrancyEffect;
+ (id)widgetQuaternaryVibrancyEffect;
+ (id)widgetSecondaryHighlightVibrancyEffect;
+ (id)widgetSecondaryVibrancyEffect;
+ (id)widgetTertiaryVibrancyEffect;

@end
