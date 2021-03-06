//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataLongDivision-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLMStack, NSString;

@interface EQKitMathMLMLongDivision : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataLongDivision>
{
    EQKitMathMLNode *mDivisor;
    EQKitMathMLMStack *mStack;
}

- (id)schemataStack;
- (id)schemataDivisor;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

