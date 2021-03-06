//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSData, NSNumber;

@interface NEFlowDivertFileHandle : NEFileHandle
{
    NSNumber *_controlUnit;
    NSData *_keyMaterial;
}

- (void).cxx_destruct;
@property(readonly) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
@property(readonly) NSNumber *controlUnit; // @synthesize controlUnit=_controlUnit;
- (unsigned long long)type;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)getUnitForSocket:(int)arg1;
- (id)initFlowDivertDataSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(_Bool)arg1;
- (id)initFlowDivertControlSocket;

@end

