//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalExpression : NSObject
{
    _Bool _isNegated;
    NSArray *_operations;
    NSSet *_dependentPathStrings;
}

+ (id)expressionFromString:(id)arg1;
+ (id)parseExpressionsFromString:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *dependentPathStrings; // @synthesize dependentPathStrings=_dependentPathStrings;
- (void).cxx_destruct;
- (_Bool)passesForDataItem:(id)arg1;
- (id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(_Bool)arg3;

@end

