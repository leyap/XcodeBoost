//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSData.h>

@interface NSData (NSDeserialization)
- (void)deserializeBytes:(void *)arg1 length:(unsigned int)arg2 atCursor:(unsigned int *)arg3;
- (unsigned int)deserializeAlignedBytesLengthAtCursor:(unsigned int *)arg1;
- (void)deserializeInts:(int *)arg1 count:(unsigned int)arg2 atCursor:(unsigned int *)arg3;
- (int)deserializeIntAtCursor:(unsigned int *)arg1;
- (void)deserializeInts:(int *)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (int)deserializeIntAtIndex:(unsigned int)arg1;
@end
