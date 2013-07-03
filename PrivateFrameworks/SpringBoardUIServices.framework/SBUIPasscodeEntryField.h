/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableCharacterSet, UIColor, UITextField, NSString, <SBUIPasscodeEntryFieldDelegate>;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {
    <SBUIPasscodeEntryFieldDelegate> *_delegate;
    UITextField *_textField;
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _ignoreCallbacks;
    BOOL _resigningFirstResponder;
    UIColor *_customBackgroundColor;
}

@property <SBUIPasscodeEntryFieldDelegate> * delegate;
@property(copy) NSString * stringValue;
@property(retain) UIColor * customBackgroundColor;
@property(getter=_textField,readonly) UITextField * textField;


- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (void)notePasscodeFieldTextDidChange;
- (BOOL)shouldInsertPasscodeText:(id)arg1;
- (void)notePasscodeFieldDidAcceptEntry;
- (BOOL)_baseResignFirstResponder;
- (BOOL)_baseBecomeFirstResponder;
- (struct CGSize { float x1; float x2; })_viewSize;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (id)_textField;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)customBackgroundColor;
- (void)_setLuminosityBoost:(float)arg1;
- (void)resetForFailedPasscode;
- (void)reset;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (id)stringValue;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setBackgroundAlpha:(float)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)initWithDefaultSize;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end