//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject
{
    id <REBacktrackingTokenBuffer> _buffer;
    id <REScriptParserDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <REScriptParserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)parse;
- (id)initWithBacktrackingBuffer:(id)arg1;

@end

