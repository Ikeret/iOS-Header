//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/UIKeyInput-Protocol.h>

@class NSArray, NSMutableArray, NSMutableString, NSString, UIColor, UITextInputPasswordRules;
@protocol PSPasscodeFieldDelegate;

@interface PSPasscodeField : UIView <UIKeyInput>
{
    NSMutableArray *_dotOutlineViews;
    NSMutableArray *_dotFullViews;
    NSMutableArray *_dashViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
    _Bool _securePasscodeEntry;
    _Bool _enabled;
    _Bool _shouldBecomeFirstResponderOnTap;
    id <PSPasscodeFieldDelegate> _delegate;
    unsigned long long _numberOfEntryFields;
    UIColor *_foregroundColor;
    long long _keyboardAppearance;
    NSArray *_fieldSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldBecomeFirstResponderOnTap; // @synthesize shouldBecomeFirstResponderOnTap=_shouldBecomeFirstResponderOnTap;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSArray *fieldSpacing; // @synthesize fieldSpacing=_fieldSpacing;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) _Bool securePasscodeEntry; // @synthesize securePasscodeEntry=_securePasscodeEntry;
@property(nonatomic) unsigned long long numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;
@property(nonatomic) __weak id <PSPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteBackward;
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;
@property(nonatomic) long long keyboardType;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)_delegateEnteredPasscode:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (void)passcodeFieldTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

