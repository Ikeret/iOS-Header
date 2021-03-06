//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIWKAutocorrectionContext : NSObject
{
    NSString *_contextBeforeSelection;
    NSString *_selectedText;
    NSString *_contextAfterSelection;
    NSString *_markedText;
    struct _NSRange _rangeInMarkedText;
}

@property(nonatomic) struct _NSRange rangeInMarkedText; // @synthesize rangeInMarkedText=_rangeInMarkedText;
@property(copy, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(copy, nonatomic) NSString *contextAfterSelection; // @synthesize contextAfterSelection=_contextAfterSelection;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *contextBeforeSelection; // @synthesize contextBeforeSelection=_contextBeforeSelection;
- (void)dealloc;

@end

