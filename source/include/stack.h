/*******************************************************************************
 * Copyright (c) 2010, Jean-David Gadina <macmade@eosgarden.com>
 * Distributed under the Boost Software License, Version 1.0.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/

/* $Id$ */

/*!
 * @header      stack.h
 * @copyright   eosgarden 2010 - Jean-David Gadina <macmade@eosgarden.com>
 * @abstract    Stack management
 */

#ifndef _BD_STACK_H_
#define _BD_STACK_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * @function    bd_new_stack
 * @abstract    Creates a new stack
 * @param       xalloc  The number of cells to allocate at a time
 * @result      A pointer to the stack, or NULL. You are responsible to destroy it by invoking the 'bd_delete_stack' function.
 */
bd_stack * bd_new_stack( unsigned int xalloc );

/*!
 * @function    bd_delete_stack
 * @abstract    Deletes a stack
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_delete_stack( bd_stack * stack );

/*!
 * @function    bd_show_stack
 * @abstract    Prints a stack representation to stdout
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_print_stack( bd_stack * stack );

/*!
 * @function    bd_get_cell
 * @abstract    Gets a specific cell from the stack
 * @param       stack   The BrainFuck stack
 * @param       num     The stack cell index
 * @result      A pointer to the cell, or NULL if the cell cannot be found
 */
bd_cell * bd_get_cell( bd_stack * stack, unsigned int num );

/*!
 * @function    bd_prev
 * @abstract    Moves to the previous cell in the stack
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_prev( bd_stack * stack );

/*!
 * @function    bd_next
 * @abstract    Moves to the next cell in the stack
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_next( bd_stack * stack );

/*!
 * @function    bd_rewind
 * @abstract    Moves to the first cell in the stack
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_rewind( bd_stack * stack );

/*!
 * @function    bd_end
 * @abstract    Moves to the last cell in the stack
 * @param       stack   The BrainFuck stack
 * @result      void
 */
void bd_end( bd_stack * stack );

#ifdef __cplusplus
}
#endif

#endif /* _BD_STACK_H_ */
